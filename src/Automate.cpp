/*************************************************************************
                                    Automate
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "Symbole.h"
#include "Automate.h"
#include "Etats/Etat.h"
#include "Etats/E0.h"
#include "ExprPlus.h"
#include "ExprMult.h"
#include "Nombre.h"

// Returns the next Symbol and shifts
void Automate::decalage(Etat * e){
    std::cout << " -------------- Décalage ------------------" << std::endl;
    Symbole * s = this->shift();
    symbolstack->push_back(s);
    statestack->push_back(e);
    
}

void Automate::reduction(int n) {
    std::cout << " -------------- Réduction de " << n << " ------------------" << std::endl;
    Etat * state;
    Expr * e;
    // Create the expression to put on the symbolstack
    if (n == 1){
        // The expression is a number
        e = static_cast <Expr *> (symbolstack->back());
        symbolstack->pop_back();
       
    } else {
        if ((int)* symbolstack->back() == close_){
            // Reduction 4
            delete(symbolstack->back());
            symbolstack->pop_back(); // Close 
            e = static_cast <Expr *> (symbolstack->back());
            symbolstack->pop_back(); // Expression
            delete(symbolstack->back());
            symbolstack->pop_back(); // Open
        } else {
            // Reduction 2 or 3
            // The second symbol popped determines the nature of the expression 
            // To create (+ or *)

            Expr * e1 = static_cast <Expr *> (symbolstack->back());
            symbolstack->pop_back();

            Symbole * op = symbolstack->back();
            symbolstack->pop_back();

            Expr * e2 = static_cast <Expr *> (symbolstack->back());
            symbolstack->pop_back();

            if ((int)* op == plus_){
                e = new ExprPlus(e1,e2);
            } else {
                e = new ExprMult(e1,e2);
            }
            delete(op);
        }
        
    }
    for (int i=0; i<n; i++){
        this->popAndDestroyState();
    }
        
    // Put to the statestack the next state having a non-terminal
    state = statestack->back();
    this->putState(state->nextState());
    // Put to the symbolstack the new expression
    this->putSymbol(e);
}


void Automate::putSymbol(Symbole *s) {
    this->symbolstack->push_back(s);
}

Symbole * Automate::popSymbol(){
    Symbole * lastSymbol = this->symbolstack->back();
    symbolstack->pop_back();
    return lastSymbol;
}

void Automate::popAndDestroySymbol() {
    delete (statestack->back());
    statestack->pop_back();
}


void Automate::putState(Etat *e) {
    this->statestack->push_back(e);
}

Etat * Automate::popState(){
    Etat * lastState = this->statestack->back();
    statestack->pop_back();
    return lastState;
}

void Automate::popAndDestroyState() {
    delete (statestack->back());
    statestack->pop_back();
}


// Get the next character from the input 
Symbole * Automate::next(){
    return lexer->next();
}

Symbole * Automate::shift(){
    return lexer->shift();
}

int Automate::lecture(){
    Etat * state = statestack->back();
    Symbole * s = next();    
    bool accept = state->transition(*this,s);
    while(!accept){
        std::cout << "Sommets de piles : "<< "states : " << (int) * statestack->back() << " : "
                                            << " symbol : " << (int) * symbolstack->back() << std::endl;
        
        // Get the next symbol
        s = next();
        
        // Get the top of the statestack 
        state = statestack->back();
        
        accept = state->transition(*this,s);
                
    }
    
    
    int result = static_cast<Expr *>(symbolstack->back())->eval();
    std::cout << "Symbole ! " << (int) * s << std::endl;
    
    return result;
}


Automate::Automate() {
    symbolstack = new std::vector<Symbole *>;
    statestack = new std::vector<Etat *>;
}

Automate::Automate(std::string expr) {
    symbolstack = new std::vector<Symbole *>;
    statestack = new std::vector<Etat *>;
    lexer = new Lexer(expr);
    // Initialisation de la pile des états avec E0
    statestack->push_back(new E0);
}

Automate::~Automate() {
    delete(symbolstack);
    delete(statestack);
    delete(lexer);
}

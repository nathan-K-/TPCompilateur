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
        // We assume that n == 3
        // The second symbol popped determines the nature of the expression 
        // To create (+, *, or () )
        
        Expr * first = static_cast <Expr *> (symbolstack->back());
        symbolstack->pop_back();
        
        Symbole * second = symbolstack->back();
        symbolstack->pop_back();
        
        Expr * third = static_cast <Expr *> (symbolstack->back());
        symbolstack->pop_back();
        
        if ((int)* second == plus_){
            //std::cout << "expr + entre: " << first->eval() << " et " << third->eval() << std::endl; //todo for debug
            e = new ExprPlus(first,third);
        } else if ((int)* second == mult_) {
            //std::cout << "expr * entre: " << first->eval() << " et " << third->eval() << std::endl; //todo for debug
            e = new ExprMult(first,third);
        } else {
            //In this case, it is paranthesis
            e = new Nombre(((Nombre *) second)->eval()); //todo : fix pas beau !
        }
        delete(second);
    }
    for (int i=0; i<n; i++){
        delete (statestack->back());
        statestack->pop_back();
    }
        
    // Put to the statestack the next state having a non-terminal
    state = statestack->back();
    statestack->push_back(state->nextState());
    // Put to the symbolstack the new expression
    symbolstack->push_back(e);
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

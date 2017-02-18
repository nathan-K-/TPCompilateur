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

// Returns the next Symbol and shifts
void Automate::decalage(Etat * e){
    Symbole * s = this->shift();
    symbolstack->push_back(s);
    statestack->push_back(e);
    
}

void Automate::reduction(int n) {
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
    for (int i=0; i<n; i++){
        delete (statestack->back());
        statestack->pop_back();
    }
    
    // Put to the statestack the next state having a non-terminal
    state = statestack->back();
    statestack->push_back(state->nextStat());
    
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
        s = next();
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
}

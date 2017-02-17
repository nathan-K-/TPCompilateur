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


void Automate::decalage(Symbole * s, Etat * e){
    symbolstack->push_back(s);
    statestack->push_back(e);
}

void Automate::reduction(int n, Symbole *s) {
    for (int i=0; i<n; i++){
        delete (statestack->back());
        statestack->pop_back();
    }

    //TODO verifier ça (back et pas front)
    statestack->back()->transition(*this, s);
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

int Automate::lecture(std::string inputString){
    
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

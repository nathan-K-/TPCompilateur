/*************************************************************************
                                    Automate
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "Symbole.h"
#include "Automate.h"


void Automate::decalage(Symbole * s, Etat * e){
    symbolstack->push_back(s);
    statestack->push_back(e);
}

Automate::Automate() {
    symbolstack = new std::vector<Symbole *>;
    statestack = new std::vector<Etat *>;
}

Automate::~Automate() {
    delete(symbolstack);
    delete(statestack);
}


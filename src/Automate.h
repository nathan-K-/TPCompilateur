/*************************************************************************
                                    Automate
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#ifndef TPCOMPILATEUR_AUTOMATE_H
#define TPCOMPILATEUR_AUTOMATE_H

#include "Symbole.h"
#include <vector>

class Etat;

class Automate {

public:
    void decalage(Symbole * s, Etat * e);
    void reduction(int n, Symbole * s);

    void putSymbol(Symbole * s);
    Symbole * popSymbol();
    void popAndDestroySymbol();

    std::vector<Symbole *> * symbolstack;
    std::vector<Etat *> * statestack;

    Automate();
    virtual ~Automate();

};


#endif //TPCOMPILATEUR_AUTOMATE_H

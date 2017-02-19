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
#include "Lexer.h"

class Etat;

class Automate {

public:
    void decalage(Etat * e);
    void reduction(int n);

    void putSymbol(Symbole * s);
    Symbole * popSymbol();
    void popAndDestroySymbol();
    Symbole * next();
    Symbole * shift();
    int lecture();
    
    std::vector<Symbole *> * symbolstack;
    std::vector<Etat *> * statestack;
    Lexer *lexer;


    Automate();
    Automate(std::string expr);
    virtual ~Automate();

};


#endif //TPCOMPILATEUR_AUTOMATE_H

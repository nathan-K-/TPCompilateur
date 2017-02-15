/*************************************************************************
                                    E1
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E1_H
#define TPCOMPILATEUR_E1_H

#include "Etat.h"

class E1 : public Etat {
public:

    //virtual bool transition (Automate & automate, Symbole * s) = 0;

    //-------------------------------------------- Constructeurs - destructeur
    E1(std::string name);
    /**
     * Constructeur
     */

    virtual ~E1() {}
    /**
     * Destructeur
     */

protected:
    std::string name;
};


#endif //TPCOMPILATEUR_E1_H

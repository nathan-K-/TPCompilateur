/*************************************************************************
                                    E1
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E1_H
#define TPCOMPILATEUR_E1_H

#include "Etat.h"
#include "../Automate.h"

class E1 : public Etat {
public:

    virtual bool transition (Automate & automate, Symbole * s);
    //-------------------------------------------- Constructeurs - destructeur
    E1() {}
    /**
     * Constructeur
     */

    virtual ~E1() {}
    /**
     * Destructeur
     */

};


#endif //TPCOMPILATEUR_E1_H

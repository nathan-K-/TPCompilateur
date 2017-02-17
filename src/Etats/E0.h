/*************************************************************************
                                    E1
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E0_H
#define TPCOMPILATEUR_E0_H

#include "Etat.h"
#include "../Automate.h"

class E0 : public Etat {
public:

    virtual bool transition (Automate & automate, Symbole * s);

    //-------------------------------------------- Constructeurs - destructeur
    E0()  {}
    /**
     * Constructeur
     */

    virtual ~E0() {}
    /**
     * Destructeur
     */


};


#endif //TPCOMPILATEUR_E0_H

/*************************************************************************
                                    E8
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E8_H
#define TPCOMPILATEUR_E8_H

#include "Etat.h"
#include "../Automate.h"

class E8 : public Etat {
public:

    virtual bool transition (Automate & automate, Symbole * s);

    //-------------------------------------------- Constructeurs - destructeur
    E8() {}
    /**
     * Constructeur
     */

    virtual ~E8() {}
    /**
     * Destructeur
     */

};


#endif //TPCOMPILATEUR_E8_H
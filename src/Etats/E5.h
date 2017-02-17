/*************************************************************************
                                    E5
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E5_H
#define TPCOMPILATEUR_E5_H

#include "Etat.h"
#include "../Automate.h"

class E5 : public Etat {
public:

    virtual bool transition (Automate & automate, Symbole * s);

    //-------------------------------------------- Constructeurs - destructeur
    E5() {}
    /**
     * Constructeur
     */

    virtual ~E5() {}
    /**
     * Destructeur
     */

};


#endif //TPCOMPILATEUR_E5_H
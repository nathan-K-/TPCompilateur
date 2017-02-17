/*************************************************************************
                                    E9
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E9_H
#define TPCOMPILATEUR_E9_H

#include "Etat.h"
#include "../Automate.h"

class E9 : public Etat {
public:

    virtual bool transition (Automate & automate, Symbole * s);

    //-------------------------------------------- Constructeurs - destructeur
    E9() {}
    /**
     * Constructeur
     */

    virtual ~E9() {}
    /**
     * Destructeur
     */

};


#endif //TPCOMPILATEUR_E9_H
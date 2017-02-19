/*************************************************************************
                                    E3
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E3_H
#define TPCOMPILATEUR_E3_H

#include "Etat.h"
#include "../Automate.h"

class E3 : public Etat {
public:
    virtual bool transition (Automate & automate, Symbole * s);
    //-------------------------------------------- Constructeurs - destructeur
    E3() {}
    /**
     * Constructeur
     */

    virtual ~E3() {}
    /**
     * Destructeur
     */
    operator int() const { return 3; }
};


#endif //TPCOMPILATEUR_E3_H

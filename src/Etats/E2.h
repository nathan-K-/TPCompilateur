/*************************************************************************
                                    E1
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E2_H
#define TPCOMPILATEUR_E2_H

#include "Etat.h"
#include "../Automate.h"

class E2 : public Etat {
public:

    virtual bool transition (Automate & automate, Symbole * s);
    Etat * nextState();
    //-------------------------------------------- Constructeurs - destructeur
    E2() {}
    /**
     * Constructeur
     */

    virtual ~E2() {}
    /**
     * Destructeur
     */
    operator int() const { return 2; }
};


#endif //TPCOMPILATEUR_E2_H

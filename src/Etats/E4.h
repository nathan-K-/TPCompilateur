/*************************************************************************
                                    E4
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E4_H
#define TPCOMPILATEUR_E4_H

#include "Etat.h"
#include "../Automate.h"

class E4 : public Etat {
public:

    virtual bool transition (Automate & automate, Symbole * s);
    Etat * nextState();
    //-------------------------------------------- Constructeurs - destructeur
    E4() {}
    /**
     * Constructeur
     */

    virtual ~E4() {}
    /**
     * Destructeur
     */
    operator int() const { return 4; }
};


#endif //TPCOMPILATEUR_E4_H
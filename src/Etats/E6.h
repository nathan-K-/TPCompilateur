/*************************************************************************
                                    E6
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E6_H
#define TPCOMPILATEUR_E6_H

#include "Etat.h"
#include "../Automate.h"

class E6 : public Etat {
public:

    virtual bool transition (Automate & automate, Symbole * s);

    //-------------------------------------------- Constructeurs - destructeur
    E6() {}
    /**
     * Constructeur
     */

    virtual ~E6() {}
    /**
     * Destructeur
     */
    operator int() const { return 6; }
};


#endif //TPCOMPILATEUR_E6_H
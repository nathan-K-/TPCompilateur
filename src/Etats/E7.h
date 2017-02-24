/*************************************************************************
                                    E7
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E7_H
#define TPCOMPILATEUR_E7_H

#include "Etat.h"
#include "../Automate.h"

class E7 : public Etat {
public:

    virtual bool transition (Automate & automate, Symbole * s);

    //-------------------------------------------- Constructeurs - destructeur
    E7() {}
    /**
     * Constructeur
     */

    virtual ~E7() {}
    /**
     * Destructeur
     */
    operator int() const { return 7; }
};


#endif //TPCOMPILATEUR_E7_H
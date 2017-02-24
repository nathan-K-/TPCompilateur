/*************************************************************************
                                    E1
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/
#ifndef TPCOMPILATEUR_E1_H
#define TPCOMPILATEUR_E1_H

#include "Etat.h"
#include "../Automate.h"

class E1 : public Etat
{
public:

    virtual bool transition(Automate &automate, Symbole *s);

    //-------------------------------------------- Constructeurs - destructeur
    E1()
    {}

    /**
     * Constructeur
     */

    virtual ~E1()
    {}

    /**
     * Destructeur
     */
    operator int() const
    { return 1; }
};


#endif //TPCOMPILATEUR_E1_H

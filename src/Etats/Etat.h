/*********************** **************************************************
                                    Etat
                            -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#ifndef TPCOMPILATEUR_STATE_H
#define TPCOMPILATEUR_STATE_H

#include <string>
#include "../Symbole.h"


class Etat
{

public:
//----------------------------------------------------- Méthodes publiques
    virtual bool transition(Automate &automate, Symbole *s) = 0;

    virtual Etat *nextState()
    { return nullptr; };

    virtual operator int() const = 0;

//-------------------------------------------- Constructeurs - destructeur
    Etat()
    {}

    /**
     * Constructeur
     */

    virtual ~Etat()
    {};
    /**
     * Destructeur
     */

};


#endif //TPCOMPILATEUR_STATE_H

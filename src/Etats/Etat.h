/*************************************************************************
                                    Etat
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#ifndef TPCOMPILATEUR_STATE_H
#define TPCOMPILATEUR_STATE_H

#include <string>
#include "../Symbole.h"
#include "../Automate.h"

class Etat {

public:
//----------------------------------------------------- Méthodes publiques
    void print() const;

    virtual bool transition (Automate & automate, Symbole * s) = 0;

//-------------------------------------------- Constructeurs - destructeur
    Etat(std::string name);
    /**
     * Constructeur
     */

    virtual ~Etat() {};
    /**
     * Destructeur
     */

};


#endif //TPCOMPILATEUR_STATE_H

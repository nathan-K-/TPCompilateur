/*********************** **************************************************
                                    Etat
                            -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#ifndef TPCOMPILATEUR_STATE_H
#define TPCOMPILATEUR_STATE_H

#include <string>
#include "Symbole.h"


class Etat {

public:
//----------------------------------------------------- Méthodes publiques
    void print() const;

    virtual bool transition (Automate & automate, Symbole * s) = 0;


    enum types { EXPR, VARIABLE, NOMBRE, OUVREPAR }; //todo : ??
//-------------------------------------------- Constructeurs - destructeur
    Etat(std::string name);
    /**
     * Constructeur
     */

    virtual ~Etat() {};
    /**
     * Destructeur
     */

protected:
    std::string name;

};


#endif //TPCOMPILATEUR_STATE_H

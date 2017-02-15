/*************************************************************************
                                    Expr
                             -------------------
    début                : 17.02
    copyright            : reprise du cours
*************************************************************************/

#ifndef TPCOMPILATEUR_EXPR_H
#define TPCOMPILATEUR_EXPR_H

#include <string>
#include <map>

#include "Symbole.h"

class Expr : public Symbole {

public:
//----------------------------------------------------- Méthodes publiques
    virtual double eval(const std::map<std::string, double> &valeurs) = 0;

//-------------------------------------------- Constructeurs - destructeur

    Expr() : Symbole((int) Expr) {} //TODO : changement depuis cours : le cast
    /**
     * Constructeur
     */

    virtual ~Expr() {}
    /**
     * Destructeur
     */

};

#endif //TPCOMPILATEUR_EXPR_H

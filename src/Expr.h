/*************************************************************************
                                    Expr
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#ifndef TPCOMPILATEUR_EXPR_H
#define TPCOMPILATEUR_EXPR_H

#include <string>
#include <map>

#include "Symbole.h"

class Expr : public Symbole
{

public:
//----------------------------------------------------- Méthodes publiques
    virtual int eval() = 0;

//-------------------------------------------- Constructeurs - destructeur

    Expr(int ident) : Symbole(ident)
    {}

    /**
     * Constructeur
     */
    Expr() : Symbole(E_)
    {}

    virtual ~Expr()
    {}
    /**
     * Destructeur
     */

};

#endif //TPCOMPILATEUR_EXPR_H

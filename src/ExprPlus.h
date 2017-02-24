/*************************************************************************
                                    ExprPlus
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#ifndef TPCOMPILATEUR_EXPRPLUS_H
#define TPCOMPILATEUR_EXPRPLUS_H


#include "Expr.h"

class ExprPlus : public Expr
{

public:
//----------------------------------------------------- Méthodes publiques
    virtual int eval()
    { return s1->eval() + s2->eval(); }

//-------------------------------------------- Constructeurs - destructeur

    ExprPlus(Expr *expr1, Expr *expr2) : s1(expr1), s2(expr2)
    {}

    /**
     * Constructeur
     */

    virtual ~ExprPlus()
    {
        delete (s1);
        delete (s2);
    }
    /**
     * Destructeur
     */

protected:
    Expr *s1;
    Expr *s2;

};

#endif //TPCOMPILATEUR_EXPRPLUS_H

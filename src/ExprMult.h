/*************************************************************************
                                    ExprPlus
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#ifndef TPCOMPILATEUR_EXPRMULT_H
#define TPCOMPILATEUR_EXPRMULT_H


#include "Expr.h"

class ExprMult : public Expr {

public:
//----------------------------------------------------- Méthodes publiques
    virtual int eval() {return s1->eval() * s2->eval();}

//-------------------------------------------- Constructeurs - destructeur

    ExprMult(Expr * expr1, Expr * expr2) : s1(expr1), s2(expr2) {}
    /**
     * Constructeur
     */

    virtual ~ExprMult() {
        delete (s1);
        delete (s2);
    }
    /**
     * Destructeur
     */

protected:
    Expr * s1;
    Expr * s2;

};

#endif //TPCOMPILATEUR_EXPRMULT_H

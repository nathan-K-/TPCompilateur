/*************************************************************************
                                    Nombre
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#ifndef TPCOMPILATEUR_NOMBRE_H
#define TPCOMPILATEUR_NOMBRE_H

#include "Symbole.h"
#include "Expr.h"

class Nombre : public Expr
{
public:


    virtual int eval()
    { return this->val; }

    Nombre(int val) : Expr(val_), val(val)
    {}

    virtual ~Nombre()
    {}

private:
    int val;

};


#endif //TPCOMPILATEUR_NOMBRE_H

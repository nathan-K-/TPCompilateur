/*************************************************************************
                                    Nombre
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#ifndef TPCOMPILATEUR_NOMBRE_H
#define TPCOMPILATEUR_NOMBRE_H

#include "Symbole.h"
#include "Expr.h"

class Nombre : public Expr {
public:

    virtual int eval() ;

    Nombre(int id);

    virtual ~Nombre() {}
    
private:
   int val; 
   
};


#endif //TPCOMPILATEUR_NOMBRE_H

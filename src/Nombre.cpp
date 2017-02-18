/*************************************************************************
                                    Nombre
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "Nombre.h"

int Nombre::eval(){
    return this->val;
}


Nombre::Nombre(int val) : Expr(val_), val(val) {

}



/*************************************************************************
                                    Nombre
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#ifndef TPCOMPILATEUR_NOMBRE_H
#define TPCOMPILATEUR_NOMBRE_H


#include "Symbole.h"

class Nombre : public Symbole {
public:

    Nombre(int val);
    int eval();
private:
   int val; 
   
};


#endif //TPCOMPILATEUR_NOMBRE_H

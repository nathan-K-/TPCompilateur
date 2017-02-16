/*************************************************************************
                                    E1
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E1.h"

bool E1::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case NOMBRE:
        case VARIABLE:
        case EXPR:
            //automate.decalage(s, new E2);
            break;
        case OUVREPAR:
            //automate.decalage(s, new E7);
            break;
    }
    return false;
}


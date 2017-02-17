/*************************************************************************
                                    E3
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E3.h"
#include "E5.h"
#include "../Expr.h"
#include "../Nombre.h"

bool E3::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case VALEUR:
            break;
        case OPEN:
            break;
        default:
            //TODO : pas sur de ça
            automate.putSymbol(s);
            Nombre * n = (Nombre *) automate.popSymbol();

            automate.reduction(1, n);
            break;

    }
    return false;
}
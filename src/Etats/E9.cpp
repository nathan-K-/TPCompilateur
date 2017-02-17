/*************************************************************************
                                    E9
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E9.h"
#include "../Expr.h"


bool E9::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case VALEUR:
            break;
        case OPEN:
            break;
        default:
            automate.putSymbol(s);

            automate.popAndDestroySymbol();
            Expr * e = (Expr *) automate.popSymbol();
            automate.popAndDestroySymbol();

            automate.reduction(3 , e);
            break;
    }
    return false;
}

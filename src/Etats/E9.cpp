/*************************************************************************
                                    E9
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E9.h"


bool E9::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case VALEUR:
            break;
        case OPEN:
            break;
        default:
            automate.putSymbol(s);
            Expr * e1 = (Expr *) automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr * e2 = (Expr *) automate.popSymbol();
            automate.reduction(3 , );
            break;
    }
    return false;
}

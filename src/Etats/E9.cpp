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
        case val_:
            break;
        case open_:
            break;
        default:
            automate.reduction(3);
            break;
    }
    return false;
}

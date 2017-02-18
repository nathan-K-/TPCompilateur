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
        case val_:
            break;
        case open_:
            break;
        default:
            automate.reduction(1);
            break;

    }
    return false;
}

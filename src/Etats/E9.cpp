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
        case PLUS:
            automate.reduction(3, s);
            break;
        case MULT:
            automate.reduction(3, s);
            break;
        case CLOSE:
            automate.reduction(3, s);
            break;
        case END:
            automate.reduction(3, s);
            break;
    }
    return false;
}

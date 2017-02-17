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

bool E3::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case PLUS:
            automate.reduction(1 , s);
            break;
        case MULT:
            automate.reduction(1 , s);
            break;
        case CLOSE:
            automate.reduction(1 , s);
            break;
        case END:
            automate.reduction(1 , s);
            break;
    }
    return false;
}
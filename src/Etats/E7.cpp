/*************************************************************************
                                    E7
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E7.h"
#include "E5.h"


bool E7::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case PLUS:
            automate.reduction(3, s);
            break;
        case MULT:
            automate.decalage(s, new E5);
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

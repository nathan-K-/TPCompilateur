/*************************************************************************
                                    E2
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E2.h"
#include "E3.h"



bool E2::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case VALEUR:
            automate.decalage(s, new E3);
            break;
        case OPEN:
            automate.decalage(s, new E2);

    }
    return false;
}


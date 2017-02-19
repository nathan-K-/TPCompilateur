/*************************************************************************
                                    E0
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E0.h"
#include "E3.h"
#include "E2.h"
#include "E1.h"

bool E0::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case val_:
            automate.decalage(new E3);
            break;
        case open_:
            automate.decalage(new E2);
            break;
    }
    return false;
}

Etat * E0::nextState(){
    return new E1;
}

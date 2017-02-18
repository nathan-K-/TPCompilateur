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
#include "E6.h"


bool E2::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case val_:
            automate.decalage(new E3);
            break;
        case open_:
            automate.decalage(new E2);

    }
    return false;
}

Etat * E2::nextState(){
    return new E6;
}
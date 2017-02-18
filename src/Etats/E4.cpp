/*************************************************************************
                                    E4
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E4.h"
#include "E3.h"
#include "E2.h"
#include "E7.h"

bool E4::transition(Automate &automate, Symbole *s) {
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

Etat * E4::nextState(){
    return new E7;
}
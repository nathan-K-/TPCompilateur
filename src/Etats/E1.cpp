/*************************************************************************
                                    E1
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E1.h"
#include "E4.h"
#include "E5.h"


bool E1::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case plus_:
            automate.decalage(new E4);
            break;
        case mult_:
            automate.decalage(new E5);
            break;
        case end_:
            return true;
    }
    return false;
}

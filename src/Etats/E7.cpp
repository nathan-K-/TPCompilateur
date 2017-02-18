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
#include "../Expr.h"
#include "../ExprPlus.h"


bool E7::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case mult_:
            automate.decalage(new E5);
            break;
        case val_:
            break;
        case open_:
            break;
        default:
            automate.reduction(3);
            break;
    }

    /*
    automate.putSymbol(s);
    Expr * s1 = (Expr *) automate.popSymbol();
    automate.popAndDestroySymbol();
    Expr * s2 = (Expr *) automate.popSymbol();
    automate.reduction(1 , s);
     */
    return false;
}

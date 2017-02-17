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
        case MULT:
            automate.decalage(s, new E5);
            break;
        case VALEUR:
            break;
        case OPEN:
            break;
        default:
            automate.putSymbol(s);
            Expr * e1 = (Expr *) automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr * e2 = (Expr *) automate.popSymbol();
            automate.reduction(3, new ExprPlus(e1, e2));
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

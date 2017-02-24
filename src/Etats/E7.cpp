/*************************************************************************
                                    E7
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E7.h"
#include "E5.h"
#include "../Expr.h"


bool E7::transition(Automate &automate, Symbole *s)
{
    switch ( *s )
    {
        case mult_:
            automate.decalage(new E5);
            break;
        case val_:
        case open_:
            std::cout
                    << "-----------------------------"
                    << std::endl
                    << "Attendu :  '+', '*' ou ')' "
                    << std::endl
                    << "Trouvé : " << TokenLabels[(int) *s]
                    << std::endl;
            return true;
        default:
            automate.reduction(3);
            break;
    }

    return false;
}

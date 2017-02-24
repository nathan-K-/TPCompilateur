/*************************************************************************
                                    E6
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E6.h"
#include "E4.h"
#include "E5.h"
#include "E9.h"


bool E6::transition(Automate &automate, Symbole *s)
{
    switch ( *s )
    {
        case plus_:
            automate.decalage(new E4);
            break;
        case mult_:
            automate.decalage(new E5);
            break;
        case close_:
            automate.decalage(new E9);
            break;
        default:
            std::cout
                    << "-----------------------------"
                    << std::endl
                    << "Attendu :  '+', '*' ou ')' "
                    << std::endl
                    << "Trouvé : " << TokenLabels[(int) *s]
                    << std::endl;
            return true;
    }
    return false;
}

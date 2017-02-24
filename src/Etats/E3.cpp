/*************************************************************************
                                    E3
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E3.h"
#include "E5.h"
#include "../Expr.h"
#include "../Nombre.h"

bool E3::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case val_:
        case open_:
            std::cout 
                << "-----------------------------" 
                << std::endl    
                << "Attendu :  '+', '*' ou ')' "
                << std::endl
                << "Trouvé : " << TokenLabels[(int) * s] 
                << std::endl; 
            return true;
        default:
            automate.reduction(1);
            break;

    }
    return false;
}

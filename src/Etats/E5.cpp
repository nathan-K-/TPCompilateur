/*************************************************************************
                                    E5
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include "../Symbole.h"
#include "../Automate.h"
#include "E5.h"
#include "E2.h"
#include "E3.h"
#include "E8.h"

bool E5::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case val_:
            automate.decalage(new E3);
            break;
        case open_:
            automate.decalage(new E2);
            break;
        default:
            std::cout 
                << "-----------------------------" 
                << std::endl    
                << "Attendu :  valeur ou '(', "
                << std::endl
                << "Trouvé : " << TokenLabels[(int) * s] 
                << std::endl; 
            return true;
    }
    return false;
}

Etat * E5::nextState(){
    return new E8;
}
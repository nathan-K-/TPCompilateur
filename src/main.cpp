/*************************************************************************
                                    main
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include <iostream>
#include <string>

#include "Automate.h"
#include "Lexer.h"
#include "Nombre.h"

int main(){ 
    
    bool continuer = true;
    while (continuer){
        std::cout << "/!\\ Ne sont permis que les nombres, +, *, (, et ) /!\\" << std::endl 
                << "Entrez une expressions arithmétique ... " << std::endl;
        std::string expr;
        std::cin >> expr ;

        Automate * automate = new Automate(expr);

        int resultat = automate->lecture();
        
        delete(automate);
        
        std::cout << "--- Résultat --- " << std::endl
                    << expr << " = " << resultat << std::endl;
        std::cout << " Entrez 0 pour terminer et 1 pour continuer ..." << std::endl;
        std::cin >> continuer;
    }
}

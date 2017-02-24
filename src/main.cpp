/*************************************************************************
                                    main
                             -------------------
    début                : 17.02
    auteurs              : HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include <iostream>

#include "Automate.h"
#include "Nombre.h"

int main()
{

    std::cout << "-------------------------------------------------------------"
              << std::endl
              << "/!\\ Ne sont permis que les nombres, +, *, (, et )"
              << std::endl
              << "/!\\ Tout autre caractère est ignoré"
              << std::endl
              << "/!\\ Ne sera évaluée que la partie bien formée de l'expression "
              << std::endl
              << "-------------------------------------------------------------"
              << std::endl
              << std::endl
              << "Entrez une expression arithmétique ... " << std::endl;

    std::string expr;
    std::getline(std::cin, expr);
    std::cout << "Expression saisie : " << expr << std::endl;

    Automate *automate = new Automate(expr);
    int resultat = automate->lecture();

    delete (automate);

    std::cout << "--- Résultat --- " << std::endl
              << expr << " = " << resultat << std::endl;

}

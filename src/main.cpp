/*************************************************************************
                                    main
                             -------------------
    début                : 17.02
    copyright            : (C) 2017 par HAMOUMA Naima et KIENLEN Nathan
*************************************************************************/

#include <iostream>

#include "Automate.h"

int main(){
    std::cout << "Hello world !" << std::endl;

    Automate * tomate = new Automate;
    delete(tomate);

    return 0;
}
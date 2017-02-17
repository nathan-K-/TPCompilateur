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
    std::cout << "Hello world !" << std::endl;


    Automate * tomate = new Automate;
    delete(tomate);
    
    Lexer * lex = new Lexer("36*+");
    Nombre* s = dynamic_cast<Nombre*>(lex->shift());
    Symbole * sy = lex->shift();
    
    std::cout << (int)*sy << std::endl;
    delete(s);
    
    return 0;
}
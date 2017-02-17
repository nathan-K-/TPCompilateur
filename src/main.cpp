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

std::string * popTest();
std::vector<std::string *> * testVector;

int main(){
    std::cout << "Hello world !" << std::endl;
    testVector = new std::vector<std::string *>;

    std::string first = "premier";
    std::string second = "second";
    std::string third = "troisieme";

    testVector->push_back(&first);
    testVector->push_back(&second);
    testVector->push_back(&third);

    std::cout << *popTest() << std::endl;
    std::cout << *popTest() << std::endl;
    std::cout << *popTest() << std::endl;

    Lexer * lex = new Lexer("36");
    Nombre* s = dynamic_cast<Nombre*>(lex->next());
    std::cout << s->eval() << std::endl;
    delete(s);

    delete(testVector);
    return 0;
}

std::string * popTest(){
    std::string * last = testVector->back();
    testVector->pop_back();
    return last;
}

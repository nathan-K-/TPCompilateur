
#include "Lexer.h"

Lexer::Lexer(std::string input, int position) 
:input(input), position(position){
    
}

Lexer::~Lexer() {
    
}

// Reads the next symbol without moving the pointer
Symbole * Lexer::next(){
    char nextChar = input[position];
    switch (nextChar){
        case '+':
            break;
        case '*':
            break;
        case '(':
            break;
        case ')':
            break;
        default:
            // If the next character is something else than a number
            // An error is signaled
            if (!isdigit(nextChar)){
                std::cout << "Erreur position : " << position 
                            << " le caractère saisi n'es ni "
                                "un nombre ni un opérateur!"
                                << std::endl;
                return new Symbole;
            }
            // The character is a digit
            int i = position;
            std::string numberS;
            while (isdigit(input[i])){
                numberS[i-position] = input[i];
                i++;
            }
            int number = stoi(numberS);
            std::cout << "I've found this number : " << number << std::endl;
            break;
    }
    return new Symbole;
}

// Reads the next symbol and the pointer shifts
Symbole * Lexer::shift(){
    
}


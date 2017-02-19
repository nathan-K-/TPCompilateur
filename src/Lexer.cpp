
#include "Lexer.h"
#include "Nombre.h"

Lexer::Lexer(std::string input, int position) 
:input(input+"$"), position(position){
    
}

Lexer::~Lexer() {
    
}

// Reads the next symbol without moving the pointer
Symbole * Lexer::next(){
    char nextChar = input[position];
    Symbole * token;
    switch (nextChar){
        case '+':
            token = new Symbole(plus_);
            break;
        case '*':
            token = new Symbole(mult_); 
            break;
        case '(':
            token = new Symbole(open_);
            break;
        case ')':
            token = new Symbole(close_);
            break;
        case '$' :
            token = new Symbole(end_);
            break;
        default:
            // If the next character is something else than a number
            // An error is signaled
            if (!isdigit(nextChar)){
                    //std::cout << "Erreur position : " << position + 1
                     //       << " le caractère saisi n'es ni "
                    //            "un nombre ni un opérateur!"
                     //           << std::endl;

                //todo : on pourrait aussi l'ignorer... a voir
                return nullptr;
            }
            // The character is a digit
            int i = position;
            std::string numberS;
            while (isdigit(input[i])){
                numberS[i-position] = input[i];
                i++;
            }
            int number = stoi(numberS);
            
            token = new Nombre(number);
            
            //std::cout << "I've found this number : " << number << std::endl;
            break;
    }
    return token;
}

// Reads the next symbol and the pointer shifts
Symbole * Lexer::shift(){
    char nextChar = input[position];
    Symbole * token;
    switch (nextChar){
        case '+':
            token = new Symbole(plus_);
            position ++;
            break;
        case '*':
            token = new Symbole(mult_); 
            position ++;
            break;
        case '(':
            token = new Symbole(open_);
            position ++;
            break;
        case ')':
            token = new Symbole(close_);
            position ++;
            break;
        case '$' :
            token = new Symbole(end_);
            position ++;
            break;
        default:
            // If the next character is something else than a number
            // An error is signaled
            if (!isdigit(nextChar)){
                    //std::cout << "Erreur position : " << position + 1
                    //        << " le caractère saisi n'es ni "
                    //            "un nombre ni un opérateur!"
                    //            << std::endl;
                    return nullptr;
            }
            // The character is a digit
            int i = position;
            std::string numberS;
            while (isdigit(input[i])){
                numberS[i-position] = input[i];
                i++;
            }
            
            int number = stoi(numberS);
            
            token = new Nombre(number);
            position = i;
            break;
    }
    return token;
}


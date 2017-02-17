
#ifndef LEXER_H
#define LEXER_H

#define fin(c) (c=='\0' or c=='\n')

#include <iostream>
#include <string>
#include "Symbole.h"

class Lexer {
public:
    Lexer(std::string input, int position=0);
    
    virtual ~Lexer();
    
    // Reads the next symbol without moving the pointer
    Symbole * next();
    
    // Reads the next symbol and the pointer shifts
    Symbole * shift();
private:
    std::string input;      // The arithmetic expression to evaluate
    int position;           // The actual position of the pointer 
                            // on the expression to read

};

#endif /* LEXER_H */


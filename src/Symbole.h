/*************************************************************************
                                    Symbole
                             -------------------
    début                : 17.02
    copyright            : reprise du cours
*************************************************************************/

#ifndef TPCOMPILATEUR_SYMBOLE_H
#define TPCOMPILATEUR_SYMBOLE_H

#include <string>

typedef enum {E_, Ep_, plus_, mult_, open_, close_, end_, nb_} Token;

const std::string TokenLabels[] = {"E", "E'", "+", "*", "(", ")", "$"};

class Symbole {

public:

//----------------------------------------------------- Méthodes publiques
    void print();

//------------------------------------------------- Surcharge d'opérateurs
    operator int() const { return ident; }

//-------------------------------------------- Constructeurs - destructeur
    Symbole (int id) : ident (id) {}
    /**
     * Constructeur
     */

    virtual ~Symbole() {}
    /**
     * Destructeur
     */

    Symbole(){};

protected:
//----------------------------------------------------- Attributs protégées
    int ident;

};



#endif //TPCOMPILATEUR_SYMBOLE_H

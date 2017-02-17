/*************************************************************************
                                    Symbole
                             -------------------
    début                : 17.02
    copyright            : reprise du cours
*************************************************************************/

#ifndef TPCOMPILATEUR_SYMBOLE_H
#define TPCOMPILATEUR_SYMBOLE_H

typedef enum {E_, Ep_, nb_, plus_, moins_, mult_, open_, close_, end_} Token;

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

protected:
//----------------------------------------------------- Attributs protégées
    int ident;

};



#endif //TPCOMPILATEUR_SYMBOLE_H
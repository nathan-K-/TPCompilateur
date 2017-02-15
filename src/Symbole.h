/*************************************************************************
                                    Symbole
                             -------------------
    début                : 17.02
    copyright            : reprise du cours
*************************************************************************/

#ifndef TPCOMPILATEUR_SYMBOLE_H
#define TPCOMPILATEUR_SYMBOLE_H

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
//----------------------------------------------------- Méthodes protégées
    int ident;

};



#endif //TPCOMPILATEUR_SYMBOLE_H

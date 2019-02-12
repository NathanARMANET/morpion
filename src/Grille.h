//
// Created by Nathan ARMANET on 2019-02-04.
//

#ifndef MORPION_GRILLE_H
#define MORPION_GRILLE_H


#include "Case.h"

class Grille {
private:
    Case * grid;
    unsigned int dimX;
    unsigned int dimY;

public:

    Grille();

    Grille(unsigned int dimX, unsigned int dimY);

    Case *getGrille() const;

    void setGrille(Case * grid);

    unsigned int getDimX() const;

    void setDimX(unsigned int dimX);

    unsigned int getDimY() const;

    void setDimY(unsigned int dimY);

    Case & getCase(unsigned int x, unsigned int y);

    void setCase(unsigned int x, unsigned int y, const Case & c);

    void affichage() const;

    bool gagneHorizontal(std::string & joueur);

    bool gagneVertical(std::string & joueur);

    bool gagneDiag(std::string & joueur);

    bool gagneAntiDiag(std::string & joueur);

    bool gagne(std::string & joueur);

    bool complet();

    Grille & operator = (Grille g);
};


#endif //MORPION_GRILLE_H

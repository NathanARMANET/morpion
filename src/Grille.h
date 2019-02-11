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

    virtual ~Grille();

    Case *getGrille() const;

    void setGrille(Case * grid);

    unsigned int getDimX() const;

    void setDimX(unsigned int dimX);

    unsigned int getDimY() const;

    void setDimY(unsigned int dimY);

    Case & getCase(unsigned int x, unsigned int y);

    void setCase(unsigned int x, unsigned int y, const Case & c);

    void affichage();

    bool gagneHorizontal();

    bool gagneVertical();

    bool gagneDiag();

    bool gagneAntiDiag();

    bool gagne();
};


#endif //MORPION_GRILLE_H

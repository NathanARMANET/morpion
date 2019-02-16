//
// Created by Nathan ARMANET on 2019-02-11.
//

#ifndef MORPION_ARBREGRILLEIA_H
#define MORPION_ARBREGRILLEIA_H


#include <vector>
#include "Grille.h"

class ArbreGrilleIA {
private:

    Grille g;
    std::vector<ArbreGrilleIA> children;
    int value;
    unsigned int x, y;

public:

    void remplirArbre(Grille g, std::string joueur);

    int minMax(unsigned int & x, unsigned int & y, unsigned int dept, bool maximizingPlayer);

    int alphaBeta(unsigned int & x, unsigned int & y, int alpha, int beta, bool maximizingPlayer);
};


#endif //MORPION_ARBREGRILLEIA_H

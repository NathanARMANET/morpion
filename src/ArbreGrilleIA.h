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

public:
    int value;

    unsigned int x, y;

    Grille &getGrille();

    void setGrille(const Grille &g);

    std::vector<ArbreGrilleIA> &getChildren();

    void setChildren(const std::vector<ArbreGrilleIA> &children);

    void remplirArbre(const Grille g, std::string joueur);

    int minMax(unsigned int & x, unsigned int & y, unsigned int dept, bool maximizingPlayer);
};


#endif //MORPION_ARBREGRILLEIA_H

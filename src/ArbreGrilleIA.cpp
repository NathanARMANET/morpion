//
// Created by Nathan ARMANET on 2019-02-11.
//

#include <iostream>
#include "ArbreGrilleIA.h"

Grille &ArbreGrilleIA::getGrille() {
    return g;
}

void ArbreGrilleIA::setGrille(const Grille &g) {
    ArbreGrilleIA::g = g;
}

std::vector<ArbreGrilleIA> &ArbreGrilleIA::getChildren() {
    return children;
}

void ArbreGrilleIA::setChildren(const std::vector<ArbreGrilleIA> &children) {
    ArbreGrilleIA::children = children;
}

int ArbreGrilleIA::getValue() const {
    return value;
}

void ArbreGrilleIA::setValue(int value) {
    ArbreGrilleIA::value = value;
}


void ArbreGrilleIA::remplirArbre(const Grille g, std::string joueur) {
    this->g = g;
    this->children.clear();
    if (!this->g.complet()) {
        Grille tmp;
        ArbreGrilleIA * child;

        for (unsigned int i = 0; i < this->g.getDimX(); ++i) {
            for (unsigned int j = 0; j < this->g.getDimY(); ++j) {
                if (this->g.getCase(i, j).getMotif() == " ") {
                    tmp = g;
                    tmp.getCase(i, j).setMotif(joueur);
                    child = new ArbreGrilleIA();
                    if (joueur == "X") {
                        child->remplirArbre(tmp, "O");
                    } else {
                        child->remplirArbre(tmp, "X");
                    }
                    children.push_back(*child);
                }
            }
        }
    }
}

int ArbreGrilleIA::minMax(unsigned int dept, bool maximizingPlayer) {
    std::string joueur;

    if (this->g.gagne(joueur)) {
        return (joueur == "0") ? 1 : -1;
    }else if (dept == 0 || this->children.size() == 0) {
        return 0;
    }

    int bestValue;
    int value;

    if (maximizingPlayer) {
        bestValue = std::numeric_limits<int>::min();
        for (ArbreGrilleIA child : children) {
            value = child.minMax(dept-1, false);
            bestValue = std::max(bestValue, value);
        }
    } else {
        bestValue = std::numeric_limits<int>::max();
        for (ArbreGrilleIA child : children) {
            value = child.minMax(dept-1, true);
            bestValue = std::min(bestValue, value);
        }
    }

    return bestValue;
}
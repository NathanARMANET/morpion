//
// Created by Nathan ARMANET on 2019-02-11.
//

#include <iostream>
#include "ArbreGrilleIA.h"

void ArbreGrilleIA::remplirArbre(Grille g, std::string joueur) {
    this->g = g;
    this->children.clear();

    if (!this->g.complet()) {
        Grille tmp = g;
        ArbreGrilleIA * child;

        for (unsigned int i = 0; i < this->g.getDimX(); ++i) {
            for (unsigned int j = 0; j < this->g.getDimY(); ++j) {
                if (tmp.getCase(i, j).getMotif() == " ") {
                    tmp.getCase(i, j).setMotif(joueur);
                    child = new ArbreGrilleIA();
                    child->x = i;
                    child->y = j;
                    if (joueur == "X") {
                        child->remplirArbre(tmp, "O");
                    } else {
                        child->remplirArbre(tmp, "X");
                    }
                    children.push_back(*child);
                    tmp.getCase(i, j).setMotif(" ");
                }
            }
        }
    }
}

int ArbreGrilleIA::minMax(unsigned int & x, unsigned int & y, unsigned int dept, bool maximizingPlayer) {
    std::string joueur;
    int bestValue;

    if (this->g.gagne(joueur)) {
        /**
         * Cas ou un joueur a gagné un apartie
         */
        x = this->x;
        y = this->y;

        bestValue = (joueur == "O") ? 10 : -10;

    }else if (dept == 0 || this->children.empty()) {
        /**
         * Cas ou la partie est un match nulle
         */
        x = this->x;
        y = this->y;

        bestValue = 0;

    } else {
        int value;
        unsigned int tmp_x = 0, tmp_y=0;

        if (maximizingPlayer) {
            bestValue = std::numeric_limits<int>::min();
            for (ArbreGrilleIA child : children) {
                value = child.minMax(x, y, dept-1, false);
                if (value > bestValue ) {
                    bestValue = value;
                    tmp_x = x;
                    tmp_y = y;
                }
            }
        } else {
            bestValue = std::numeric_limits<int>::max();
            for (ArbreGrilleIA child : children) {
                value = child.minMax(x, y, dept-1, true);
                if (value < bestValue) {
                    bestValue = value;
                    tmp_x = x;
                    tmp_y = y;
                }
            }
        }

        x = tmp_x;
        y = tmp_y;
    }

    this->value = bestValue;

    return this->value;
}

int ArbreGrilleIA::alphaBeta(unsigned int & x, unsigned int & y, int alpha, int beta, bool maximizingPlayer) {
    std::string joueur;
    int value, bestValue;

    if (this->g.gagne(joueur)) {
        /*
         * Cas ou un joueur a gagné un apartie
         */
        x = this->x;
        y = this->y;

        bestValue = (joueur == "O") ? 10 : -10;

    }else if (this->children.empty()) {
        /*
         * Cas ou la partie est un match nulle
         */
        x = this->x;
        y = this->y;
        bestValue = 0;

    } else if (maximizingPlayer) {
        bestValue = std::numeric_limits<int>::min();
        for(ArbreGrilleIA child : children) {
            value = child.alphaBeta(x, y, alpha, beta, !maximizingPlayer);
            bestValue = std::max(bestValue, value);
            alpha = std::max(alpha, bestValue);
            if (alpha >= beta) break;
        }
    }else {
        bestValue = std::numeric_limits<int>::max();
        for(ArbreGrilleIA child : children) {
            value = child.alphaBeta(x, y, alpha, beta, !maximizingPlayer);
            bestValue = std::min(bestValue, value);
            beta = std::min(beta, bestValue);
            if (alpha >= beta) break;
        }
    }

    this->value = bestValue;

    return this->value;
}
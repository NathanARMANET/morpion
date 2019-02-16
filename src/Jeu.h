//
// Created by Nathan ARMANET on 2019-02-14.
//

#ifndef MORPION_JEU_H
#define MORPION_JEU_H


#include "Grille.h"
#include "ArbreGrilleIA.h"

class Jeu {
private:
    Grille * grille;
    ArbreGrilleIA * IA;
    std::string J1, J2;
    unsigned int round, col, row;
    int mode;

public:
    Jeu();

    bool read(unsigned int & value, Grille * g);

    void readLineAndCol(unsigned int & line, unsigned int & col, Grille * g);

    void menu();

    void start();

    void PvP();

    void PvIA_minMax();

    void PvIA_alphaBeta();
};


#endif //MORPION_JEU_H

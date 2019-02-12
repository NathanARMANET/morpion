#include <iostream>
#include "src/Grille.h"
#include "src/ArbreGrilleIA.h"


int main() {
    Grille g;
    g.getCase(0, 0).setMotif("X");
    ArbreGrilleIA IA;

    IA.remplirArbre(g, "O");

    std::cout<<IA.minMax(9, false)<<std::endl;
}
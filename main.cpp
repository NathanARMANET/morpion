#include <iostream>
#include "src/Grille.h"

int main() {
    Grille * g = new Grille();
    std::string J1 = "X";
    std::string J2 = "O";

    g->affichage();
    return 0;
}
#include <iostream>
#include "src/Grille.h"
#include "src/ArbreGrilleIA.h"
#include "src/Jeu.h"


int main() {
    Jeu morpion;

    morpion.menu();
    morpion.start();

    return 0;
}
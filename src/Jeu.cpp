//
// Created by Nathan ARMANET on 2019-02-14.
//

#include <iostream>
#include "Jeu.h"

Jeu::Jeu() {
    grille = new Grille();
    IA = new ArbreGrilleIA();
    J1 = "X";
    J2 = "O";
    round = 1;
    col = 1;
    row = 1;
    mode = -1;
}

bool Jeu::read(unsigned int & value, Grille * g) {
    // on ne fait pas la distinction entre la dimX et la dimY de la grille car la taille du morpion restera 3*3.
    // Si on venait à faire un morpion avec des dimensions X et Y différentes, il faudrait en revanche vérifier la saisie de la valeur en fonction de
    // la saisie en cours (colonne ou ligne)
    while( ! (std::cin >> value) || value > g->getDimX() || value < 0 )
    {
        // s'il y a un problème d'EOF
        if(std::cin.eof())
        {
            return false;
        }
            // si la saisie est un caractère
        else if (std::cin.fail())
        {
            // on demande à l'utilisateur de recommencer et on vide le buffer
            std::cout << "Saisie incorrecte, recommencez : "<<std::endl;
            std::cin.clear();
            std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        }
            // si l'utilisateur saisit une valeur hors de la grille
        else if(value > g->getDimX() || value < 0)
        {
            std::cout << "Votre saisie est hors de la grille, recommencez."<<std::endl;
        }
    }
    return true;
}

void Jeu::readLineAndCol(unsigned int &line, unsigned int &col, Grille* g) {
    std::cin.clear();
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
    std::cout <<"Veuillez choisir la colonne"<<std::endl;
    if(read(col, g))
    {
        // on rappelle le choix fait
        std::cout << "Vous avez choisi la colonne : " << col << std::endl;
        if(read(line, g))
        {
            std::cout <<"Veuillez choisir la ligne"<<std::endl;
            // on rappelle le choix fait
            std::cout << "Vous avez choisi la ligne : " << line << std::endl;
        }
    }
}

void Jeu::menu() {
    std::cout<<"Bienvenue a ce jeu de Morpion !"<<std::endl;
    std::cout<<"3 modes sont à votre disposition :"<<std::endl;
    std::cout<<"1. Joueur contre Joueur"<<std::endl;
    std::cout<<"2. Joueur contre IA (min-max)"<<std::endl;
    std::cout<<"3. Joueur contre IA (alpha-beta)"<<std::endl;
    std::cout<<"Votre choix : ";
    std::cin>>mode;
}

void Jeu::start() {
    switch (mode) {
        case 1 : PvP();
            break;

        case 2 : PvIA_minMax();
            break;

        case 3 :
            PvIA_alphaBeta();
            break;

        default : std::cout<<"choix non valide"<<std::endl;
            break;
    }
}

void Jeu::PvP() {
    std::string tmp;

    // mess de bienvenue
    std::cout<<"Bienvenue sur le jeu du Morpion. "
               "Joueur 1 commence ! "<<std::endl;
    do
    {
        // on affiche la grille
        grille->affichage();
        // on demande à l'utilisateur de saisir une colonne
        std::cout<<"Joueur 1 : Entrez la colonne ou vous souhaitez placer votre pion."<<std::endl;
        // si la saisie est correcte
        if(read(col, grille))
        {
            // on rappelle le choix fait
            std::cout << "Vous avez choisi la colonne : " << col << std::endl;
            std::cout<<"Joueur 1 : Entrez la ligne ou vous souhaitez placer votre pion."<<std::endl;
            if(read(row, grille))
            {
                // on rappelle le choix fait
                std::cout << "Vous avez choisi la ligne : " << row << std::endl;
                while(grille->getCase(row - 1, col - 1).getMotif() != " ")
                {
                    std::cerr << "Un pion est deja place ici ! Recommencez. " <<std::endl;
                    readLineAndCol(row, col, grille);
                }
            }
        }
        grille->getCase(row - 1, col - 1).setMotif(J1);
        //le pion a bien été placé
        round++;
        // si le joueur 1 a gagné
        if(grille->gagne(tmp))
        {
            grille->affichage();
            // victoire
            std::cout<<"Joueur 1 (X) gagne ! "<<std::endl;
            // fin
            return;
        }
        else if(round >= 10)
        {
            std::cout<<"Match nul ! Partie terminee. " <<std::endl;
            return;
        }
        else
        {
            std::cout<<std::endl;
            // on affiche la grille
            grille->affichage();
            // on demande à l'utilisateur de saisir une colonne
            std::cout<<"Joueur 2 : Entrez la colonne ou vous souhaitez placer votre pion."<<std::endl;
            // si la saisie est correcte
            if(read(col, grille))
            {
                // on rappelle le choix fait
                std::cout << "Vous avez choisi la colonne : " << col << std::endl;
                std::cout << "Joueur 2 : Entrez la ligne ou vous souhaitez placer votre pion." << std::endl;

                if(read(row, grille))
                {
                    if(grille->getCase(row-1, col-1).getMotif() != " ")
                    {
                        std::cout << "Vous avez choisi la ligne : " << row << std::endl;
                    }
                    // on rappelle le choix fait
                    while(grille->getCase(row - 1, col - 1).getMotif() != " ")
                    {
                        std::cerr << "Un pion est deja place ici ! Recommencez. " <<std::endl;
                        readLineAndCol(row, col, grille);
                    }
                }
            }
            grille->getCase(row - 1, col - 1).setMotif(J2);
            //le pion a bien été placé
            round++;
            // si le joueur 2 a gagné
            if(grille->gagne(tmp))
            {
                grille->affichage();
                // victoire
                std::cout<<"Joueur 2 (O) gagne ! "<<std::endl;
                // fin
                return;
            }
            else if(round >= 10)
            {
                std::cout<<"Match nul ! Partie terminee. " <<std::endl;
                return;
            }
        }
    }
    while(!grille->gagne(tmp) && round <= 10);
}

void Jeu::PvIA_minMax() {
    std::string tmp;

    // mess de bienvenue
    std::cout<<"Bienvenue sur le jeu du Morpion. "
               "Joueur 1 commence ! "<<std::endl;
    do
    {
        // on affiche la grille
        grille->affichage();
        // on demande à l'utilisateur de saisir une colonne
        std::cout<<"Joueur 1 : Entrez la colonne ou vous souhaitez placer votre pion."<<std::endl;
        // si la saisie est correcte
        if(read(col, grille))
        {
            // on rappelle le choix fait
            std::cout << "Vous avez choisi la colonne : " << col << std::endl;
            std::cout<<"Joueur 1 : Entrez la ligne ou vous souhaitez placer votre pion."<<std::endl;
            if(read(row, grille))
            {
                // on rappelle le choix fait
                std::cout << "Vous avez choisi la ligne : " << row << std::endl;
                while(grille->getCase(row - 1, col - 1).getMotif() != " ")
                {
                    std::cerr << "Un pion est deja place ici ! Recommencez. " <<std::endl;
                    readLineAndCol(row, col, grille);
                }
            }
        }
        grille->getCase(row - 1, col - 1).setMotif(J1);
        //le pion a bien été placé
        round++;
        // si le joueur 1 a gagné
        if(grille->gagne(tmp))
        {
            grille->affichage();
            // victoire
            std::cout<<"Joueur 1 (X) gagne ! "<<std::endl;
            // fin
            return;
        }
        else if(round >= 10)
        {
            grille->affichage();
            std::cout<<"Match nul ! Partie terminee. " <<std::endl;
            return;
        }
        else
        {
            std::cout<<std::endl;
            // on affiche la grille
            grille->affichage();

            // on demande à l'utilisateur de saisir une colonne
            std::cout<<"Tour de l'IA"<<std::endl;

            // si la saisie est correcte
            IA->remplirArbre(*grille, J2);
            IA->minMax(col, row, 9-(round-1), false);
            grille->getCase(col, row).setMotif(J2);

            //le pion a bien été placé
            round++;
            // si l'IA a gagné
            if(grille->gagne(tmp))
            {
                grille->affichage();
                // victoire
                std::cout<<"IA (O) gagne ! "<<std::endl;
                // fin
                return;
            }
            else if(round >= 10)
            {
                grille->affichage();
                std::cout<<"Match nul ! Partie terminee. " <<std::endl;
                return;
            }
        }
    }
    while(!grille->gagne(tmp) && round <= 10);
}

void Jeu::PvIA_alphaBeta() {
    std::string tmp;

    // mess de bienvenue
    std::cout<<"Bienvenue sur le jeu du Morpion. "
               "Joueur 1 commence ! "<<std::endl;
    do
    {
        // on affiche la grille
        grille->affichage();
        // on demande à l'utilisateur de saisir une colonne
        std::cout<<"Joueur 1 : Entrez la colonne ou vous souhaitez placer votre pion."<<std::endl;
        // si la saisie est correcte
        if(read(col, grille))
        {
            // on rappelle le choix fait
            std::cout << "Vous avez choisi la colonne : " << col << std::endl;
            std::cout<<"Joueur 1 : Entrez la ligne ou vous souhaitez placer votre pion."<<std::endl;
            if(read(row, grille))
            {
                // on rappelle le choix fait
                std::cout << "Vous avez choisi la ligne : " << row << std::endl;
                while(grille->getCase(row - 1, col - 1).getMotif() != " ")
                {
                    std::cerr << "Un pion est deja place ici ! Recommencez. " <<std::endl;
                    readLineAndCol(row, col, grille);
                }
            }
        }
        grille->getCase(row - 1, col - 1).setMotif(J1);
        //le pion a bien été placé
        round++;
        // si le joueur 1 a gagné
        if(grille->gagne(tmp))
        {
            grille->affichage();
            // victoire
            std::cout<<"Joueur 1 (X) gagne ! "<<std::endl;
            // fin
            return;
        }
        else if(round >= 10)
        {
            std::cout<<"Match nul ! Partie terminee. " <<std::endl;
            return;
        }
        else
        {
            std::cout<<std::endl;
            // on affiche la grille
            grille->affichage();
            // on demande à l'utilisateur de saisir une colonne
            std::cout<<"Tour de l'IA"<<std::endl;


            IA->remplirArbre(*grille, J2);
            IA->alphaBeta(col, row, std::numeric_limits<int>::min(), std::numeric_limits<int>::max(), true);
            grille->getCase(col, row).setMotif(J2);

            //le pion a bien été placé
            round++;
            // si l'IA a gagné
            if(grille->gagne(tmp))
            {
                grille->affichage();
                // victoire
                std::cout<<"IA (O) gagne ! "<<std::endl;
                // fin
                return;
            }
            else if(round >= 10)
            {
                std::cout<<"Match nul ! Partie terminee. " <<std::endl;
                return;
            }
        }
    }
    while(!grille->gagne(tmp) && round <= 10);
}

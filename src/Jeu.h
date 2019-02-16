/**
 * @file Jeu.h
 * Gestion du jeu Morpion
 * @author ARMANET Nathan, NAAJI Dorian
 * @version 1.0
 * @date 16/02/2019
 */

#ifndef MORPION_JEU_H
#define MORPION_JEU_H


#include "Grille.h"
#include "ArbreGrilleIA.h"

/**
 * @brief Crée et stocke les informations nécéssaire à un jeu de morpion.
 */
class Jeu {
private:

    /**
     * @brief Grille de jeu.
     */
    Grille * grille;

    /**
     * @brief IA du jeu.
     */
    ArbreGrilleIA * IA;

    /**
     * @brief Chaîne de caractère permettant de stocké les motif des joueurs/IA.
     */
    std::string J1, J2;

    /**
     * @brief Entier pour le nombre de tour ; la colonne où on joue ; la ligne où on joue.
     */
    unsigned int round, col, row;

    /**
     * @brief Le mode de jeu.
     */
    int mode;

public:

    /**
     * @brief Constructeur par défault de la classe Jeu.
     *
     */
    Jeu();

    /**
     * @brief Demande à l'utilisateur de rentrer une valeur et vérifie si elle est valide.
     * @param [in,out] value Valeur entrée par l'utilisateur.
     * @return True si value est valide ; false sinon.
     */
    bool read(unsigned int & value);

    /**
     * @brief Demande à l'utilisateur de rentrer les coordonnées de la case souhaitée.
     */
    void readLineAndCol();

    /**
     * @brief Demande à l'utilisateur de choisir le mode de jeu.
     */
    void menu();

    /**
     * @brief Demarre le mode de jeu souhaité par l'utilisateur.
     */
    void start();

    /**
     * @brief Mode de jeu Joueur contre Joueur.
     */
    void PvP();

    /**
     * @brief Mode de jeu Joueur contre IA (algorithme min-max)
     */
    void PvIA_minMax();

    /**
     * @brief Mode de jeu Joueur contre IA (algorithme alpha-beta)
     */
    void PvIA_alphaBeta();
};


#endif //MORPION_JEU_H

/**
 * @file ArbreGrilleIA.h
 * Gestion de l'IA du jeu Morpion
 * @author ARMANET Nathan, NAAJI Dorian
 * @version 1.0
 * @date 16/02/2019
 */

#ifndef MORPION_ARBREGRILLEIA_H
#define MORPION_ARBREGRILLEIA_H


#include <vector>
#include "Grille.h"

/**
 * @brief Crée et stocke les informations nécéssaire à l'IA de notre jeu de morpion.
 */
class ArbreGrilleIA {
private:

    /**
     * @brief grille qui servira de racine de l'arbre
     */
    Grille g;

    /**
     * FIls de la racine
     */
    std::vector<ArbreGrilleIA> children;

    /**
     * Valeur du noeud
     */
    int value;

    /**
     * case qui a été joué lors de ce noeud
     */
    unsigned int x, y;

public:

    /**
     * @brief Initialise l'arbre a partir d'un état de la grille et du joueur qui doit la remplire directement.
     * @param [in] g Grille a copier.
     * @param [in] joueur Motif du joueur qui doit remplire directement la grille.
     */
    void remplirArbre(Grille g, std::string joueur);

    /**
     * Algorithme MIN-MAX
     * @param [in,out] x Colonne du mailleur coup possible.
     * @param [in,out] y Ligne du meilleur coup possible.
     * @param [in] dept Profondeur à laquelle on veut décendre.
     * @param [in] maximizingPlayer Booléen pour savoir si on veut la plus grande ou la plus petite valeur possible.
     * @return Meilleur valeur possible à l'état actulle du jeu.
     */
    int minMax(unsigned int & x, unsigned int & y, unsigned int dept, bool maximizingPlayer);

    /**
     * Algorithme ALPHA-BETA
     * @param [in,out] x Colonne du mailleur coup possible.
     * @param [in,out] y Ligne du meilleur coup possible.
     * @param [in] alpha Borne min de l'algo.
     * @param [in] beta Borne max de l'algo.
     * @param [in] maximizingPlayer Booléen pour savoir si on veut la plus grande ou la plus petite valeur possible.
     * @return Meilleur valeur possible à l'état actulle du jeu.
     */
    int alphaBeta(unsigned int & x, unsigned int & y, int alpha, int beta, bool maximizingPlayer);
};


#endif //MORPION_ARBREGRILLEIA_H

/**
 * @file Grille.h
 * Gestion de la grille
 * @author ARMANET Nathan, NAAJI Dorian
 * @version 1.0
 * @date 16/02/2019
 */

#ifndef MORPION_GRILLE_H
#define MORPION_GRILLE_H


#include "Case.h"

/**
 * @brief Crée et stocke les informations nécéssaire à une grille de morpion.
 */
class Grille {
private:

    /**
     * @brief Tableau de Case qui formera la grille de jeu.
     */
    Case * grid;

    /**
     * @brief Nombre de colonne de la grille.
     */
    unsigned int dimX;

    /**
     * @brief Nombre de ligne de la grille.
     */
    unsigned int dimY;

public:

    /**
     * @brief Constructeur par défault de la classe.
     *
     * Initialise les attributs dimX et dimY à 3 et crée un tableau 3x3 de Case.
     */
    Grille();

    /**
     * @brief Getter de l'attribut dimX.
     * @return Le nombre de colonne de la grille de jeu de morpion.
     */
    unsigned int getDimX() const;

    /**
     * @brief Getter de l'attribut dimY.
     * @return Le nombre de ligne de la grille de jeu de morpion.
     */
    unsigned int getDimY() const;

    /**
     * @brief Getter d'une case de la grille.
     * @param [in] x La colonne de la case.
     * @param [in] y La ligne de la case.
     * @return La case au coordonnées (x ; y).
     */
    Case & getCase(unsigned int x, unsigned int y);

    /**
     * @brief Setter d'une case de la grille.
     * @param [in] x La colonne de la case.
     * @param [in] y La ligne de la case.
     * @param [in] c La case dont les valeurs remplacera les ancienne valeur.
     */
    void setCase(unsigned int x, unsigned int y, const Case & c);

    /**
     * @brief Procedure prémettant d'affiche la grille de jeu dans la console.
     */
    void affichage() const;

    /**
     * @brief Méthode vérifiant si un joueur (ou l'IA) a gagné.
     *
     * Vérifie si 3 case d'une memes ligne ont le même motif ("X" ou "O") et sont non vide (" ").
     *
     * @param [in,out] joueur permet de savoir quel joueur (ou IA) a gagné.
     * @return true si un joueur (ou IA) a gagné ; false sinon
     */
    bool gagneHorizontal(std::string & joueur);


    /**
     * @brief Méthode vérifiant si un joueur (ou l'IA) a gagné.
     *
     * Vérifie si 3 case d'une memes colonne ont le même motif ("X" ou "O") et sont non vide (" ").
     *
     * @param [in,out] joueur permet de savoir quel joueur (ou IA) a gagné.
     * @return true si un joueur (ou IA) a gagné ; false sinon
     */
    bool gagneVertical(std::string & joueur);

    /**
     * @brief Méthode vérifiant si un joueur (ou l'IA) a gagné.
     *
     * Vérifie si 3 case la diagonale (de HAUT/GAUCHE a BAS/DROITE) ont le même motif ("X" ou "O") et sont non vide (" ").
     *
     * @param [in,out] joueur permet de savoir quel joueur (ou IA) a gagné.
     * @return true si un joueur (ou IA) a gagné ; false sinon
     */
    bool gagneDiag(std::string & joueur);

    /**
     * @brief Méthode vérifiant si un joueur (ou l'IA) a gagné.
     *
     * Vérifie si 3 case la diagonale (de BAS/GAUCHE a HAUT/DROITE) ont le même motif ("X" ou "O") et sont non vide (" ").
     *
     * @param [in,out] joueur permet de savoir quel joueur (ou IA) a gagné.
     * @return true si un joueur (ou IA) a gagné ; false sinon
     */
    bool gagneAntiDiag(std::string & joueur);

    /**
     * @brief Méthode vérifiant si un joueur (ou l'IA) a gagné.
     *
     * @param [in,out] joueur permet de savoir quel joueur (ou IA) a gagné.
     * @return true si un joueur (ou IA) a gagné ; false sinon.
     */
    bool gagne(std::string & joueur);

    /**
     * @brief Vérifie si la grille est complète (si toutes les cases sont vide ou non).
     * @return booléen : true si la grille est complète ; false sinon.
     */
    bool complet();

    /**
     * @brief Copie les valeur des attribut d'une grille dans une autre.
     * @param [in] g Grille à copié.
     * @return Une grille avec les attributs copiés.
     */
    Grille & operator = (Grille g);
};


#endif //MORPION_GRILLE_H

/**
 * @file Case.h
 * Gestion des cases de la grille.
 * @author ARMANET Nathan, NAAJI Dorian
 * @version 1.0
 * @date 16/02/2019
 */

#ifndef MORPION_CASE_H
#define MORPION_CASE_H


#include <string>

/**
 * @brief Crée et stocke les informations d'une case de la grille.
 */
class Case {
private:

    /**
     * @brief Element permettant de différencier les différents type de Cases.
     *
     * Valeur possible :
     * "X" = joueur 1
     * "O" = joueur 2 ou IA
     * " " = case vide
     */
    std::string motif;

public:

    /**
     * @brief Constructeur par défault de la classe Case.
     */
    Case();

    /**
     * @brief Getter pour l'attribut motif.
     * @return Le motif de la case (une chaîne de caractère).
     */
    const std::string &getMotif() const;

    /**
     * @brief Setter pour l'attribut motif.
     * @param [in] motif Le nouveau motif.
     */
    void setMotif(const std::string &motif);

    /**
     * @brief Compare si 2 cases ont le même motif et ne sont pas vide.
     * @param [in] rhs Case à comparer
     * @return valeur booléenne de la comparaison
     */
    bool operator ==(const Case &rhs) const;

    /**
     * @brief Inverse ==.
     * @param [in] rhs Case à comparer
     * @return valeur booléenne de la comparaison
     */
    bool operator !=(const Case &rhs) const;
};


#endif //MORPION_CASE_H

/**
 * @file Case.cpp
 * Gestion des cases du damier.
 * @author ARMANET Nathan, NAAJI Dorian
 * @version 1.0
 * @date 16/02/2019
 */

#include "Case.h"

Case::Case() {
    this->motif = " ";
}

const std::string &Case::getMotif() const {
    return motif;
}

void Case::setMotif(const std::string &motif) {
    Case::motif = motif;
}

bool Case::operator==(const Case &rhs) const {
    return motif == rhs.motif && motif != " ";
}

bool Case::operator!=(const Case &rhs) const {
    return !(rhs == *this);
}
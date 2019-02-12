//
// Created by Nathan ARMANET on 2019-02-04.
//

#include "Case.h"

Case::Case() {
    this->motif = " ";
    this->value = 0;
}

Case::Case(const std::string &motif) : motif(motif) {
    this->motif = motif;
    this->value = 0;
}



const std::string &Case::getMotif() const {
    return motif;
}

void Case::setMotif(const std::string &motif) {
    Case::motif = motif;
}

int Case::getValue() const {
    return value;
}

void Case::setValue(int value) {
    Case::value = value;
}


bool Case::operator==(const Case &rhs) const {
    return motif == rhs.motif && motif != " ";
}

bool Case::operator!=(const Case &rhs) const {
    return !(rhs == *this);
}
//
// Created by Nathan ARMANET on 2019-02-04.
//

#ifndef MORPION_CASE_H
#define MORPION_CASE_H


#include <string>

class Case {
private:

    std::string motif;
    int value;

public:

    Case();

    explicit Case(const std::string &motif);

    const std::string &getMotif() const;

    void setMotif(const std::string &motif);

    int getValue() const;

    void setValue(int value);

    bool operator==(const Case &rhs) const;

    bool operator!=(const Case &rhs) const;
};


#endif //MORPION_CASE_H

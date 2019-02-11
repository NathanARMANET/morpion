//
// Created by Nathan ARMANET on 2019-02-04.
//

#ifndef MORPION_CASE_H
#define MORPION_CASE_H


#include <string>

class Case {
private:

    std::string motif;

public:

    Case();

    Case(const std::string &motif);

    virtual ~Case();

    const std::string &getMotif() const;

    void setMotif(const std::string &motif);

    bool operator==(const Case &rhs) const;

    bool operator!=(const Case &rhs) const;
};


#endif //MORPION_CASE_H

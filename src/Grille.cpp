//
// Created by Nathan ARMANET on 2019-02-04.
//

#include <iostream>
#include "Grille.h"
#include <assert.h>


Grille::Grille() {
    this->dimX = 3;
    this->dimY = 3;

    this->grid = new Case[this->dimX * this->dimY];
}

Grille::Grille(unsigned int dimX, unsigned int dimY) : dimX(dimX), dimY(dimY) {
    this->dimX = dimX;
    this->dimY = dimY;

    this->grid = new Case[this->dimX * this->dimY];
}

Case *Grille::getGrille() const {
    return grid;
}

void Grille::setGrille(Case *grille) {
    Grille::grid = grille;
}

unsigned int Grille::getDimX() const {
    return dimX;
}

void Grille::setDimX(unsigned int dimX) {
    Grille::dimX = dimX;
}

unsigned int Grille::getDimY() const {
    return dimY;
}

void Grille::setDimY(unsigned int dimY) {
    Grille::dimY = dimY;
}

Case & Grille::getCase(unsigned int x, unsigned int y) {
    assert(x<dimX);
    assert(y<dimY);
    return grid[y*dimX+x];
}

void Grille::setCase(unsigned int x, unsigned int y, const Case & c) {
    assert(x<dimX);
    assert(y<dimY);
    grid[y*dimX+x] = c;
}

void Grille::affichage() const {
    std::cout<<"|   | 1 | 2 | 3 |"<<std::endl;
    for (int i = 0; i < dimX; ++i) {
        std::cout<<"| "<<i+1<<" ";
        for (int j = 0; j < dimY; ++j) {
            std::cout<<"| "<<grid[j*dimX+i].getMotif()<<" ";
        }
        std::cout<<"|"<<std::endl;
    }
}

bool Grille::gagneHorizontal(std::string & joueur) {
    for (unsigned int i = 0; i < dimX; ++i) {
        if (getCase(i, 0)== getCase(i, 1) && getCase(i, 0)==getCase(i, 2) && getCase(i, 0).getMotif() != " ") {
            joueur = getCase(i, 0).getMotif();
            return true;
        }
    }
    return false;
}

bool Grille::gagneVertical(std::string & joueur) {
    for (unsigned int j = 0; j < dimY; ++j) {
        if (getCase(0, j)== getCase(1, j) && getCase(0, j)==getCase(2, j) && getCase(0, j).getMotif() != " ") {
            joueur = getCase(0, j).getMotif();
            return true;
        }
    }
    return false;
}

bool Grille::gagneDiag(std::string & joueur) {
    if (getCase(0, 0)==getCase(1, 1) && getCase(0, 0)==getCase(2, 2) && getCase(0, 0).getMotif() != " ") {
        joueur = getCase(0, 0).getMotif();
        return true;
    }
    return false;
}

bool Grille::gagneAntiDiag(std::string & joueur) {
    if (getCase(0, 2)==getCase(1, 1) && getCase(0, 0)==getCase(2, 0)  && getCase(0, 0).getMotif() != " ") {
        joueur = getCase(0, 0).getMotif();
        return true;
    }
    return false;
}

bool Grille::gagne(std::string & joueur) {
    return gagneHorizontal(joueur)||gagneVertical(joueur)||gagneDiag(joueur)||gagneAntiDiag(joueur);
}

bool Grille::complet() {
    for (int i = 0; i < dimX; ++i) {
        for (int j = 0; j < dimY; ++j) {
            if (getCase(i, j).getMotif() == " ") {
                return false;
            }
        }
    }

    return true;
}

Grille & Grille::operator=(Grille g) {
    for (int i = 0; i < dimX; ++i) {
        for (int j = 0; j < dimY; ++j) {
            setCase(i, j, g.getCase(i, j));
        }
    }

    return *this;
}

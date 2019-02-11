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

Grille::~Grille() {
    delete this->grid;
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

void Grille::affichage() {
    for (int i = 0; i < dimX; ++i) {
        for (int j = 0; j < dimY; ++j) {
            std::cout<<"| "<<grid[i*dimX+j].getMotif()<<" ";
        }
        std::cout<<"|"<<std::endl;
    }
}

bool Grille::gagneHorizontal() {
    for (int i = 0; i < dimX; ++i) {
        for (int j = 0; j < dimY; ++j) {

        }
    }
    return false;
}

bool Grille::gagneVertical() {
    return false;
}

bool Grille::gagneDiag() {
    return false;
}

bool Grille::gagneAntiDiag() {
    return false;
}

bool Grille::gagne() {
    return gagneHorizontal()||gagneVertical()||gagneDiag()||gagneAntiDiag();
}

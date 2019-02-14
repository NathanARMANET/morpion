cmake_minimum_required(VERSION 3.12)
project(morpion)

set(CMAKE_CXX_STANDARD 17)

add_executable(morpion main.cpp src/Case.cpp src/Case.h src/Grille.cpp src/Grille.h src/ArbreGrilleIA.cpp src/ArbreGrilleIA.h src/Jeu.cpp src/Jeu.h)
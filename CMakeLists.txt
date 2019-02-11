cmake_minimum_required(VERSION 3.13)
project(morpion)

set(CMAKE_CXX_STANDARD 17)

add_executable(morpion main.cpp src/Case.cpp src/Case.h src/Grille.cpp src/Grille.h)
EXEC = bin/morpion

GGDB = -Wall -ggdb
paramC = -std=c++11 -Wall -c

OBJ = 	obj/Case.o \
	obj/Grille.o \
	obj/ArbreGrilleIA.o \
	obj/Jeu.o

HEADER= src/Case.h src/Grille.h

all: $(EXEC)

bin/morpion: main.cpp $(OBJ)
	g++ $(GGBD) main.cpp $(OBJ) -o bin/morpion

obj/%.o: src/%.cpp $(HEADER)
	g++ $(paramC) $< -o $@

ifeq ($(OS),Windows_NT)
clean:
	del /f obj\*.o

veryclean: clean
	del /f bin\*.exe
else
clean:
	rm obj/*.o

veryclean:
	rm bin/*
	make clean
endif

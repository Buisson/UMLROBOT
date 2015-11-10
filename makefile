include default.mk


INITIAL_FILES = main.cpp Etat.cpp
ALL = main

main : main.o
	$(CXX_LINK) -o main main.o

Etat : Etat.o
	$(CXX_LINK) -o Etat Etat.o

Position : Position.o
	$(CXX_LINK) -o Position Position.o

Plot : Plot.o
	$(CXX_LINK) -o Plot Plot.o

Objet : Objet.o
	$(CXX_LINK) -o Objet Objet.o

extra_all:


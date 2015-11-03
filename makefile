include default.mk


INITIAL_FILES = main.cpp Etat.cpp
ALL = main

main : main.o
	$(CXX_LINK) -o main main.o

Etat : Etat.o
	$(CXX_LINK) -o Etat Etat.o


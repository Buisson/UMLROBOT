include default.mk


INITIAL_FILES = main.cpp Etat.cpp Position.cpp Plot.cpp Objet.cpp Robot.cpp Figer.cpp
ALL = main

main : main.o Etat.o Position.o Plot.o Objet.o Robot.o Figer.o
	$(CXX_LINK) -o main main.o

#Position : Position.o
	#$(CXX_LINK) -o Position Position.o

extra_all:


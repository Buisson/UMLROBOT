CC = g++
CFLAGS = -Wall -std=c++11
EXEC_NAME = main
INCLUDES =
LIBS =
OBJ_FILES = main.o Etat.o Figer.o Position.o Plot.o Objet.o Robot.o EnRoute.o AVideFacePlot.o EnChargeFacePlot.o AVide.o EnCharge.o Afficheur.o TexteDisplay.o

all : $(EXEC_NAME)

clean :
	rm $(EXEC_NAME) $(OBJ_FILES)

$(EXEC_NAME) : $(OBJ_FILES)
	$(CC) -o $(EXEC_NAME) $(OBJ_FILES) $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.cc
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.c
	gcc $(CFLAGS) $(INCLUDES) -o $@ -c $<

install :
	cp $(EXEC_NAME) $(INSTALL_DIR)

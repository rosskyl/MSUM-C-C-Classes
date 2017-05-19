#Author:   	Kyle Ross
#Assignment:	8
#Professor:	Dan Brekke
#Due:		May 3, 2016
#File:     	makefile
#Description:	makefile

EXE=prog8
CC=g++
OBJECTS=main.o symbol.o
$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
		
main.o: 	main.cpp hashtable.h symbol.h
		$(CC) -c main.cpp

sybmol.o:	symbol.cpp symbol.h
		$(CC) -c symbol.cpp
		
clean:
		rm -rf $(OBJECTS) *~ $(EXE)


# File:     makefile
# Author:   Dan Brekke
# Date: 

# Description
# This makefile will make the example program of a rectangleType class

CC=g++
OBJECTS=main.o rectangleType.o boxType.o squareType.o
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
main.o: 	main.cpp rectangleType.h boxType.h squareType.h
		$(CC) -c main.cpp
rectangleType.o:	rectangleType.cpp rectangleType.h
		$(CC) -c rectangleType.cpp
boxType.o:	boxType.cpp boxType.h rectangleType.h
		$(CC) -c boxType.cpp
squareType.o:	squareType.cpp squareType.h rectangleType.h
		$(CC) -c squareType.cpp
clean:
		rm -rf *.o *~ $(EXE)


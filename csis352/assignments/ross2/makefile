# Author:   	Kyle Ross
# Assignment:	2
# Professor:	Dan Brekke
# Due:		Feb 16, 2016
# File:     	makefile
# Description:	makefile


CC=g++
OBJECTS=date.o main.o
EXE=prog2

$(EXE):			$(OBJECTS)
			$(CC) -o $(EXE) $(OBJECTS)
			echo "\n\n\nType $(EXE) to run program"
		
main.o: 		main.cpp date.h
			$(CC) -c main.cpp
		
date.o:			date.cpp date.h
			$(CC) -c date.cpp
		
clean:
			rm -rf *.o core.* $(EXE)


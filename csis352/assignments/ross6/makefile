# Author:   	Kyle Ross
# Assignment:	6
# Professor:	Dan Brekke
# Due:		April 8, 2016
# File:     	makefile
# Description:	makefile


CC=g++
OBJECTS=main.o
EXE=prog5

$(EXE):			$(OBJECTS)
			$(CC) -o $(EXE) $(OBJECTS)
			echo "\n\n\nType $(EXE) to run program"
		
main.o: 		main.cpp sortedlist.h
			$(CC) -c main.cpp
		
clean:
			rm -rf *.o core.* $(EXE) *.test


# Author:   	Kyle Ross
# Assignment:	4
# Professor:	Dan Brekke
# Due:		3/10/2016
# File:     	makefile
# Description:	makefile


CC=g++
OBJECTS=main.o
EXE=prog4

$(EXE):			$(OBJECTS)
			$(CC) -o $(EXE) $(OBJECTS)
			echo "\n\n\nType $(EXE) to run program"
		
main.o: 		main.cpp linkedQueue.h
			$(CC) -c main.cpp
		
clean:
			rm -rf *.o core.* $(EXE)
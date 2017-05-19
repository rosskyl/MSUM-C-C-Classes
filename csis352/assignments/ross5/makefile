# Author:   	Kyle Ross
# Assignment:	3
# Professor:	Dan Brekke
# Due:		March 1, 2016
# File:     	makefile
# Description:	makefile


CC=g++
OBJECTS=main.o city.o
EXE=prog5

$(EXE):			$(OBJECTS)
			$(CC) -o $(EXE) $(OBJECTS)
			echo "\n\n\nType $(EXE) to run program"
		
main.o: 		main.cpp graph.h
			$(CC) -c main.cpp
			
city.o:			city.cpp city.h
			$(CC) -c city.cpp
		
clean:
			rm -rf *.o core.* $(EXE) *.test


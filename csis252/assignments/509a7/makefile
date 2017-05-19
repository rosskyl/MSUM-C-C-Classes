#File:		makefile
#Author:	Kyle Ross
#Assignment:	7
#Professor:	Brekke
#Due:		10/31/2014
#Description:	



OBJECTS=main.o dateType.o

CC=g++

EXEC=prog7


$(EXEC):			$(OBJECTS)
				$(CC) -o $(EXEC) $(OBJECTS)
				
main.o:				main.cpp dateType.h
				$(CC) -c main.cpp
				
dateType.o:			dateType.cpp dateType.h
				$(CC) -c dateType.cpp
				
				
clean:				
				rm -rf *.o *~ $(EXEC)
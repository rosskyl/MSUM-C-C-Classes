#File:		makefile
#Author:	Kyle Ross
#Assignment:	10
#Professor:	Brekke
#Due:		11/24/2014
#Description:	make file



OBJECTS=main.o sentence.o read.o output.o

CC=g++

EXEC=prog10



$(EXEC):		$(OBJECTS)
			$(CC) -o $(EXEC) $(OBJECTS)
				
main.o:			main.cpp sentence.h prototypes.h
			$(CC) -c main.cpp
			
sentence.o:		sentence.cpp sentence.h queueType.h stackType.h
			$(CC) -c sentence.cpp

read.o:			read.cpp arrayListType.h sentence.h
			$(CC) -c read.cpp
			
output.o:		output.cpp sentence.h arrayListType.h
			$(CC) -c output.cpp
			
			
clean:				
			rm -rf *.o *~ $(EXEC)
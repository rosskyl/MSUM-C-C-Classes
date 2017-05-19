#File:		makefile
#Author:	Kyle Ross
#Assignment:	11
#Professor:	Brekke
#Due:		12/8/2014
#Description:	makefile


OBJECTS=main.o dateType.o personType.o studentType.o read.o output.o

CC=g++

EXEC=prog11


$(EXEC):		$(OBJECTS)
			$(CC) -o $(EXEC) $(OBJECTS)
				
main.o:			main.cpp studentType.h
			$(CC) -c main.cpp
				
personType.o:		personType.cpp personType.h dateType.h
			$(CC) -c personType.cpp
			
studentType.o:		studentType.cpp studentType.h personType.h
			$(CC) -c studentType.cpp
			
read.o:			read.cpp binarySearchTree.h studentType.h
			$(CC) -c read.cpp
			
output.o:		output.cpp binarySearchTree.h studentType.h
			$(CC) -c output.cpp
			
			
clean:				
			rm -rf *.o *~ $(EXEC)
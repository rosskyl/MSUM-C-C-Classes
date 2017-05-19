#File:		makefile
#Author:	Kyle Ross
#Assignment:	9
#Professor:	Brekke
#Due:		11/17/2014
#Description:	make file


OBJECTS=main.o dateType.o employeeType.o personType.o read.o output.o

CC=g++

EXEC=prog9


$(EXEC):		$(OBJECTS)
			$(CC) -o $(EXEC) $(OBJECTS)
				
main.o:			main.cpp dateType.h employeeType.h personType.h arrayListType.h prototypes.h
			$(CC) -c main.cpp
				
personType.o:		personType.cpp personType.h dateType.h
			$(CC) -c personType.cpp
			
employeeType.o:		employeeType.cpp personType.h dateType.h constants.h
			$(CC) -c employeeType.cpp
			
dateType.o:		dateType.cpp dateType.h
			$(CC) -c dateType.cpp
			
read.o:			read.cpp employeeType.h arrayListType.h dateType.h
			$(CC) -c read.cpp
			
output.o:		output.cpp employeeType.h arrayListType.h dateType.h
			$(CC) -c output.cpp
			
			
			
clean:				
			rm -rf *.o *~ $(EXEC)
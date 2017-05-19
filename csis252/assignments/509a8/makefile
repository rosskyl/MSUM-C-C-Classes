#File:		makefile
#Author:	Kyle Ross
#Assignment:	8
#Professor:	Brekke
#Due:		11/7/2014
#Description:	make file


OBJECTS=main.o dateType.o employeeType.o personType.o

CC=g++

EXEC=prog8


$(EXEC):		$(OBJECTS)
			$(CC) -o $(EXEC) $(OBJECTS)
				
main.o:			main.cpp dateType.h employeeType.h personType.h
			$(CC) -c main.cpp
				
personType.o:		personType.h dateType.h
			$(CC) -c personType.cpp
			
employeeType.o:		personType.h dateType.h constants.h
			$(CC) -c employeeType.cpp
			
			
			
clean:				
			rm -rf *.o *~ $(EXEC)
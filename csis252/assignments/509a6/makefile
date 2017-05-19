#File:	      makefile
#Author:      Kyle Ross
#Assignment:  6
#Professor:   Brekke
#Due:         Oct 24, 2014
#Description:	contains makefile



OBJECTS=main.o read.o printEmployees.o calcEmployeeInfo.o calcEmployeeSummary.o printSummary.o

CC=g++

EXEC=prog6



$(EXEC):			$(OBJECTS)
				$(CC) -o $(EXEC) $(OBJECTS)
				
main.o:				main.cpp constants.h decl.h
				$(CC) -c main.cpp
				
read.o:				read.cpp constants.h decl.h
				$(CC) -c read.cpp
				
printEmployees.o:		printEmployees.cpp decl.h
				$(CC) -c printEmployees.cpp
				
calcEmployeeInfo.o:		calcEmployeeInfo.cpp decl.h constants.h
				$(CC) -c calcEmployeeInfo.cpp
				
calcEmployeeSummary.o:		calcEmployeeSummary.cpp decl.h
				$(CC) -c calcEmployeeSummary.cpp
				
printSummary.o:			printSummary.cpp decl.h
				$(CC) -c printSummary.cpp
				
clean:				
				rm -rf *.o *~ $(EXEC)
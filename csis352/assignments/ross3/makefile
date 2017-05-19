# Author:   	Kyle Ross
# Assignment:	3
# Professor:	Dan Brekke
# Due:		March 1, 2016
# File:     	makefile
# Description:	makefile


CC=g++
OBJECTS=main.o
EXE=prog3

$(EXE):			$(OBJECTS)
			$(CC) -o $(EXE) $(OBJECTS)
			echo "\n\n\nType $(EXE) to run program"
		
main.o: 		main.cpp array.h
			$(CC) -c main.cpp
		
clean:
			rm -rf *.o core.* $(EXE) *.test

test1:			test1.o
			$(CC) -o test1.test test1.o
			
test1.o:		array.h test1.cpp
			$(CC) -c test1.cpp
			
test2:			test2.o
			$(CC) -o test2.test test2.o
			
test2.o:		array.h test2.cpp
			$(CC) -c test2.cpp
			
test3:			test3.o
			$(CC) -o test3.test test3.o
			
test3.o:		array.h test3.cpp
			$(CC) -c test3.cpp
			
test4:			test4.o
			$(CC) -o test4.test test4.o
			
test4.o:		array.h test4.cpp
			$(CC) -c test4.cpp
			
test5:			test5.o
			$(CC) -o test5.test test5.o
			
test5.o:		array.h test5.cpp
			$(CC) -c test5.cpp
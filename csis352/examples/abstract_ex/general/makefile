OBJECTS = main.o

CC=g++

prog:		$(OBJECTS)
		$(CC) -o prog $(OBJECTS)
main.o:		main.cpp display.h vt100.h vt100.cpp
		$(CC) -c main.cpp
clean:
		rm -rf $(OBJECTS) *~ prog

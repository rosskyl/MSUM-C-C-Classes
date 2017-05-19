# File:     makefile
# Author:   Kyle Ross

# Description


CC=g++
OBJECTS=currency.o currencymain.o
EXE=prog1

$(EXE):			$(OBJECTS)
			$(CC) -o $(EXE) $(OBJECTS)
			echo "\n\n\nType $(EXE) to run program"
		
currencymain.o: 	currencymain.cpp currency.h
			$(CC) -c currencymain.cpp
		
currency.o:		currency.cpp currency.h
			$(CC) -c currency.cpp
		
clean:
			rm -rf *.o core.* $(EXE)


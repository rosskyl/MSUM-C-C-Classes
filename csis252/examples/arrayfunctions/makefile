prog:		main.o sort.o read.o output.o average.o largest.o
		g++ -o prog main.o sort.o read.o output.o average.o largest.o
		
main.o:		main.cpp constants.h prototypes.h
		g++ -c main.cpp

read.o:		read.cpp constants.h
		g++ -c read.cpp
		
output.o:	output.cpp
		g++ -c output.cpp
		
largest.o:	largest.cpp
		g++ -c largest.cpp
		
average.o:	average.cpp
		g++ -c average.cpp
		
sort.o:		sort.cpp
		g++ -c sort.cpp

clean:
		rm -rf *.o prog *~

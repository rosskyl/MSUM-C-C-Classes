OBJECTS = lessThanAverage_greaterThanAverage.o  main.o  numOfOdds_numOfEvens.o  printValues.o  read.o  smallestInt_largestInt.o  sort.o  sum_calcAverage.o


prog5:					$(OBJECTS)
					g++ -o prog5 $(OBJECTS)
		
lessThanAverage_greaterThanAverage.o:	lessThanAverage_greaterThanAverage.cpp
					g++ -c lessThanAverage_greaterThanAverage.cpp
					
main.o:					main.cpp constants.h prototypes.h
					g++ -c main.cpp
		
numOfOdds_numOfEvens.o:			numOfOdds_numOfEvens.cpp
					g++ -c numOfOdds_numOfEvens.cpp
				
printValues.o:				printValues.cpp
					g++ -c printValues.cpp
			
read.o:					read.cpp constants.h
					g++ -c read.cpp
		
smallestInt_largestInt.o:		smallestInt_largestInt.cpp
					g++ -c smallestInt_largestInt.cpp
				
sort.o:					sort.cpp
					g++ -c sort.cpp
		
sum_calcAverage.o:			sum_calcAverage.cpp
					g++ -c sum_calcAverage.cpp
			
clean:					
					rm -rf *.o *~ prog5

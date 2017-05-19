File:    README
Author:  Kyle Ross
Program: Assignment 5
Date:    10/17/2014

BUILDING THE PROGRAM
   This program was written in C++ and distributed to be built on a 
   Linux system.  To build the program, type 'make' to create the 
   executable called 'prog5'

RUNNING THE PROGRAM
   Type 'prog5' at the command prompt after building the program.

PROGRAM DESCRIPTION
   This program will read ints from the file 'input' and summary
   will be written to the file 'result'  This includes the ints
   themselves, the average value, the biggest and smallest value,
   number of odds and evens, number of values less than and greater
   than the average, and the sorted values.

PROGRAM INPUT
   All input comes from the file 'input' that must exist prior to the
   execution of the program.  The program will read the input file
   until end of file is reached.  The format of the input file follows:
      int1
      int2
      ...
      intN
   For example:
      5
      4 6
      3
   
PROGRAM OUTPUT
   All output is written to 'results' containing the summary. This
   includes the array itself, the average of the values, the biggest and smallest value,
   number of odds and evens, number of values less than and greater
   than the average, and the sorted values.

   For example:
      numbers in the array: 5 4 6 3 
      average is 4.50
      the biggest is 6
      sorted array: 3 4 5 6 

FILE INDEX
file						function		description
----------------------------------------	--------------------	------------------------------
constants.h					declarations		declares constants

lessThanAverage_greaterThanAverage.cpp		lessThanAverage 	finds numbers less than average
						greaterThanAverage	finds numbers greater than average

main.cpp					main			main function

numOfOdds_numOfEvens.cpp			numOfOdds 		finds number of odds
						numOfEvens		finds number of evens
						
printValues.cpp					printValues		prints numbers to screen

prototypes.h					declarations		declares function prototypes

read.cpp					read			reads input from user and adds to numbers

smallestInt_largestInt.cpp			smallestInt 		finds smallest int and its index
						largestInt		finds largest int and its index
						
sort.cpp					sort			sorts numbers
   
sum_calcAverage.cpp				sum 			finds sum of numbers
						calcAverage		calculates the average
						

PROGRAM TESTING
   This program was tested with different sets of data.  

   Checked for a normal set of data in the file
   
   Checked for the number of values exceeding the array size
   
   Checked for data file not existing
   
   Checked for the data file existing but not containing any values
   
   Checked for the data file containing 1 value

   There are no known bugs.
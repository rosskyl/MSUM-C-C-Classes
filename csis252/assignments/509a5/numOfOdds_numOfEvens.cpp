//Author:      Kyle Ross
//Assignment:  5
//Professor:   Brekke
//Due:         Oct 17, 2014
//Description: contains numOfEvens function which returns the number
//		of evens in an array
//		also numOfOdds function which returns the number of 
//		odds in an array

#include <iostream>
#include <iomanip>


int numOfEvens(const int numbers[], int count) {
    /*
     * description: finds the number of evens in numbers
     * input: numbers(array), count(int)
     * output: evens(int)
     * preconditions: none
     * postconditions: number of evens returned
     */
    int evens = 0;//number of evens
    
    for (int index = 0; index < count; index += 1) {
	if (numbers[index] % 2 == 0)//even number divisible by 2
	    evens += 1;
    }//end for loop
    return evens;
}//end numOfEvens function

int numOfOdds(const int numbers[], int count) {
    /*
     * description: finds the number of odds in numbers
     * input: numbers(array), count(int)
     * output: odds(int)
     * preconditions: none
     * postconditions: number of odds returned
     */
    int odds = 0;//number of odds
    
    for (int index = 0; index < count; index += 1) {
	if (numbers[index] % 2 == 1)//odd numbers remainder of 1 when divided by 2
	    odds += 1;
    }//end for loop
    return odds;
}//end numOfOdds function
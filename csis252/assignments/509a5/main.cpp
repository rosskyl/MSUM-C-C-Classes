//Author:      Kyle Ross
//Assignment:  5
//Professor:   Brekke
//Due:         Oct 17, 2014
//Description: 

#include <iostream>
#include <iomanip>
#include <fstream>

#include "constants.h"
#include "prototypes.h"

using namespace std;



int main(){
    int numbers[ARRAY_SIZE];
    int count;
    int smallest;
    int smallestIndex;
    int largest;
    int largestIndex;
    int smallestSearchIndex;
    int largestSearchIndex;
    int search;
    int searchCount;
    double average;
    ofstream outfile;
    
    outfile.open("results");
    
    
    outfile << fixed << showpoint << setprecision(2);
    
    read(numbers, count);
    
    
    outfile << "Numbers in the array" << endl;
    printValues(numbers, count, outfile);
    
    average = calcAverage(numbers, count);
    outfile << "The average is " << average << endl;
    
    outfile << "There are " << lessThanAverage(numbers, count, average) << " numbers less than the average" << endl;
    
    outfile << "There are " << greaterThanAverage(numbers, count, average) << " numbers greater than the average" << endl;
    
    smallestInt(numbers, count, smallest, smallestIndex);
    outfile << "The smallest number is " << smallest << " found at index " << smallestIndex << endl;
    
    largestInt(numbers, count, largest, largestIndex);
    outfile << "The largest number is " << largest << " found at index " << largestIndex << endl;
    
    outfile << "There are " << numOfEvens(numbers, count) << " even numbers" << endl;
    
    outfile << "There are " << numOfOdds(numbers, count) << " odd numbers" << endl;
    
    sort(numbers, count);
    outfile << "Numbers in the array" << endl;
    printValues(numbers, count, outfile);
    
    
    return 0;
}//end main function

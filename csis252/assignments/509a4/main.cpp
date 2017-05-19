//Author:      Kyle Ross
//Assignment:  4
//Professor:   Brekke
//Due:         Oct 3, 2014
//Description: 

#include <iostream>
#include <iomanip>

using namespace std;

//constants
const int ARRAY_SIZE = 10;
const int SENTINEL = 0;


//function prototypes
void read(int numbers[], int& count);
void printValues(const int numbers[], int count);
int sum(const int numbers[], int count);
double calcAverage(const int numbers[], int count);
int lessThanAverage(const int numbers[], int count, double average);
int greaterThanAverage(const int numbers[], int count, double average);
void smallestInt(const int numbers[], int count, int& smallest, int& smallestIndex);
void largestInt(const int numbers[], int count, int& largest, int& largestIndex);
int numOfEvens(const int numbers[], int count);
int numOfOdds(const int numbers[], int count);
void sort(int numbers[], int count);
void searchNumbers(const int numbers[], int count, int searchNum, int& smallestSearchIndex, int& largestSearchIndex, int& searchCount);

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
    
    cout << fixed << showpoint << setprecision(2);
    
    read(numbers, count);
    
    cout << "Numbers in the array" << endl;
    printValues(numbers, count);
    
    average = calcAverage(numbers, count);
    cout << "The average is " << average << endl;
    
    cout << "There are " << lessThanAverage(numbers, count, average) << " numbers less than the average" << endl;
    
    cout << "There are " << greaterThanAverage(numbers, count, average) << " numbers greater than the average" << endl;
    
    smallestInt(numbers, count, smallest, smallestIndex);
    cout << "The smallest number is " << smallest << " found at index " << smallestIndex << endl;
    
    largestInt(numbers, count, largest, largestIndex);
    cout << "The largest number is " << largest << " found at index " << largestIndex << endl;
    
    cout << "There are " << numOfEvens(numbers, count) << " even numbers" << endl;
    
    cout << "There are " << numOfOdds(numbers, count) << " odd numbers" << endl;
    
    sort(numbers, count);
    cout << "Numbers in the array" << endl;
    printValues(numbers, count);
    
    cout << "Enter an integer to search for: " << endl;
    cin >> search;
    searchNumbers(numbers, count, search, smallestSearchIndex, largestSearchIndex, searchCount);
    if (searchCount == 0)
	cout << search << " is not found" << endl;
    else {
	cout << search << " is found " << searchCount << " times" << endl;
	cout << "The first place is " << smallestSearchIndex << " and the last place is " << largestSearchIndex << endl;
    }//end else
    
    return 0;
}//end main function


void read(int numbers[], int& count) {
    /*
     * description: stores user input ints into numbers and updates count to the number of ints stored
     * preconditions: none
     * postconditions: numbers updated, count updated
     */
    int num;
    count = 0;
    
    cout << "Enter a postive number or " << SENTINEL << " to end input: " << endl;
    cin >> num;
    while (num != SENTINEL) {
	if (num < 0) 
	    cout << "\nValue must be positive" << endl;
	else if (count < ARRAY_SIZE) {
	    numbers[count] = num;
	    count += 1;
	}//end else if
	else
	    cout << num << " was not saved. Too many values entered" << endl;
	cout << "Enter a positive number or " << SENTINEL << " to end input: " << endl;
	cin >> num;
    }//end while loop
}//end read function

void printValues(const int numbers[], int count) {
    /*
     * description: prints the values of numbers to the screen
     * preconditions: none
     * postconditions: values of numbers printed to the screen
     */
    for (int index = 0; index < count; index += 1)
	cout << numbers[index] << " ";
    cout << "" << endl;
}//end printValues function

int sum(const int numbers[], int count) {
    /*
     * description: calculates to total sum of numbers
     * preconditions: none
     * postconditions: total returned
     */
    int total = 0;
    
    for (int index = 0; index < count; index += 1) {
	total += numbers[index];
    }//end for loop
    return total;
}//end sum function

double calcAverage(const int numbers[], int count) {
    /*
     * description: calculates the average of numbers
     * preconditions: none
     * postconditions: average returned
     */
    double average;
    
    average = sum(numbers, count) / static_cast<double>(count);
    return average;
}//end average function

int lessThanAverage(const int numbers[], int count, double average) {
    /*
     * description: calculates the number of ints less than the average
     * preconditions: none
     * postconditions: numLessThanAverage returned
     */
    int numLessThanAverage = 0;
    
    for (int index = 0; index < count; index += 1) {
	if (numbers[index] < average)
	    numLessThanAverage += 1;
    }//end for loop
    return numLessThanAverage;
}//end lessThanAverage function

int greaterThanAverage(const int numbers[], int count, double average) {
    /*
     * description: calculates the number of ints greater than the average
     * preconditions: none
     * postconditions: numGreaterThanAverage returned
     */
    int numGreaterThanAverage = 0;
    
    for (int index = 0; index < count; index += 1) {
	if (numbers[index] > average)
	    numGreaterThanAverage += 1;
    }//end for loop
    return numGreaterThanAverage;
}//end greaterThanAverage function

void smallestInt(const int numbers[], int count, int& smallest, int& smallestIndex) {
    /*
     * description: finds the smallest int in numbers and the index of this int
     * preconditions: none
     * postconditions: smallest updated, smallestIndex updated
     */
    smallest = numbers[0];
    for (int index = count - 1; index >= 0; index -= 1) {
	if (smallest > numbers[index]) {
	    smallest = numbers[index];
	    smallestIndex = index;
	}
    }//end for loop
}//end smallestInt function

void largestInt(const int numbers[], int count, int& largest, int& largestIndex) {
    /*
     * description: finds the largest int in numbers and the index of this int
     * preconditions: none
     * postconditions: largestupdated, largestIndex updated
     */
    largest = numbers[0];
    for (int index = 1; index < count; index += 1) {
	if (largest < numbers[index]) {
	    largest = numbers[index];
	    largestIndex = index;
	}//end if loop
    }//end for loop    
}//end largestInt function

int numOfEvens(const int numbers[], int count) {
    /*
     * description: finds the number of evens in numbers
     * preconditions: none
     * postconditions: evens returned
     */
    int evens = 0;
    
    for (int index = 0; index < count; index += 1) {
	if (numbers[index] % 2 == 0)//even number divisible by 2
	    evens += 1;
    }//end for loop
    return evens;
}//end numOfEvens function

int numOfOdds(const int numbers[], int count) {
    /*
     * description: finds the number of odds in numbers
     * preconditions: none
     * postconditions: odds returned
     */
    int odds = 0;
    
    for (int index = 0; index < count; index += 1) {
	if (numbers[index] % 2 == 1)//odd numbers remainder of 1 when divided by 2
	    odds += 1;
    }//end for loop
    return odds;
}//end numOfOdds function

void sort(int numbers[], int count) {
    /*
     * description: sorts numbers in ascending order
     * preconditions: none
     * postconditions: numbers updated
     */
    int temp;
    int small;
    for (int i=0; i<count-1; i++) {
	small=i;
        for (int j=i+1; j<count; j++)  // loop to find the smallest
           if (numbers[j] < numbers[small])
              small=j;
        temp = numbers[i];
        numbers[i] = numbers[small];
        numbers[small] = temp;
    }//end for loop
}//end sort function

void searchNumbers(const int numbers[], int count, int searchNum, int& smallestSearchIndex, int& largestSearchIndex, int& searchCount) {
    /*
     * description: searches numbers for an int and finds the smallest and largest index this number occurs
     * preconditions: none
     * postconditions: smallestSearchIndex updated, largestSearchIndex updated, searchCount updated
     */
    searchCount = 0;
    for (int index = 0; index < count; index += 1) {//using for loop because all of the occurances of the search value need to be accounted for
	if (numbers[index] == searchNum) {
	    searchCount += 1;
	    if (searchCount == 1)//first time the search value occurs
		smallestSearchIndex = index;
	    largestSearchIndex = index;//happens everytime and the last occurance is the largestSearchIndex
	}//end if
    }//end for loop
}//end search function
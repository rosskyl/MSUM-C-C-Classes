//Author:      Kyle Ross
//Assignment:  3
//Professor:   Brekke
//Due:         Sep 24, 2014
//Description: 

#include <iostream>
#include <iomanip>

using namespace std;

const int SENTINEL = 0;//value to be entered to stop the input
const int ARRAY_SIZE = 10;//size of the array and values saved

int main(){
    double average;
    int numbers[ARRAY_SIZE];//numbers saved
    int num;//number input
    int count = 0;//number of ints inputted
    int total = 0;
    int smallest;//smallest number
    int largest;//largest number
    int smallestIndex;//index of the smallest number
    int largestIndex;//index of the largest number
    int evens = 0;//number of even numbers
    int odds = 0;//number of odd numbers
    int search;
    int smallestSearchIndex = -1;//smallest index the search is found at
    int largestSearchIndex = -1;//largest index the search is found at
    int searchCount = 0;//number of times the search is found
    
    cout << "Only " << ARRAY_SIZE << " numbers are saved" << endl;
    
    
    //taking input
    cout << "Enter a number or " << SENTINEL << " to end input: " << endl;
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
	cout << "Enter a number or " << SENTINEL << " to end input: " << endl;
	cin >> num;
    }//end while loop
    
    cout << "" << endl;
    
    //printing numbers on one line
    for (int index = 0; index < count; index += 1)
	cout << numbers[index] << " ";
    cout << "" << endl;
    
    
    //printing and calculating average
    for (int index = 0; index < count; index += 1) {
	total += numbers[index];
    }//end for loop
    average = total / static_cast<double>(count);
    cout << setprecision(2) << showpoint << fixed;
    cout << "\nAverage: " << average << endl;
    
    cout << "" << endl;
    
    //output values less than the average
    cout << "Numbers less than the average " << average << endl;
    for (int index = 0; index < count; index += 1) {
	if (numbers[index] < average)
	    cout << numbers[index] << " ";
    }//end for loop
    cout << "" << endl;
    
    cout << "" << endl;
    
    //output values greater than the average
    cout << "Numbers greater than the average " << average << endl;
    for (int index = 0; index < count; index += 1) {
	if (numbers[index] > average)
	    cout << numbers[index] << " ";
    }//end for loop
    cout << "" << endl;
    
    cout << "" << endl;
    
    //outputs the smallest number and its index
    smallest = numbers[0];
    for (int index = count - 1; index >= 0; index -= 1) {
	if (smallest > numbers[index]) {
	    smallest = numbers[index];
	    smallestIndex = index;
	}
    }//end for loop
    cout << "The smallest number is " << smallest << " at position " << smallestIndex << endl;
    
    cout << "" << endl;
    
    //outputs the largest number and its index
    largest = numbers[0];
    for (int index = 1; index < count; index += 1) {
	if (largest < numbers[index]) {
	    largest = numbers[index];
	    largestIndex = index;
	}//end if loop
    }//end for loop
    cout << "The largest number is " << largest << " at position " << largestIndex << endl;
    
    cout << "" << endl;
    
    //outputting the number of even and odd numbers
    for (int index = 0; index < count; index += 1) {
	if (numbers[index] % 2 == 0)//even number divisible by 2
	    evens += 1;
	else if (numbers[index] % 2 == 1)//odd number with a remainder when divided by 2
	    odds += 1;
    }//end for loop
    cout << "There are " << evens << " even numbers" << endl;
    cout << "There are " << odds << " odd numbers" << endl;
    
    cout << "" << endl;
    
    //searching the numbers
    cout << "Enter an integer to search for: " << endl;
    cin >> search;
    for (int index = 0; index < count; index += 1) {//using for loop because all of the occurances of the search value need to be accounted for
	if (numbers[index] == search) {
	    searchCount += 1;
	    if (searchCount == 1)//first time the search value occurs
		smallestSearchIndex = index;
	    largestSearchIndex = index;//happens everytime and the last occurance is the largestSearchIndex
	}//end if
    }//end for loop
    cout << "" << endl;
    if (searchCount == 0)
	cout << search << " is not found" << endl;
    else {
	cout << search << " is found " << searchCount << " times" << endl;
	cout << "The first place is " << smallestSearchIndex << " and the last place is " << largestSearchIndex << endl;
    }//end else
    
    
    return 0;
}
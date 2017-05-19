//Author:      Kyle Ross
//Assignment:  5
//Professor:   Brekke
//Due:         Oct 17, 2014
//Description: contains sort function which sorts numbers(array)

#include <iostream>
#include <iomanip>


void sort(int numbers[], int count) {
    /*
     * description: sorts numbers in ascending order
     * input: numbers(array), count(int)
     * output: none
     * preconditions: none
     * postconditions: numbers updated
     */
    int temp;//temp number holder
    int small;//small number index
    for (int i=0; i<count-1; i++) {
	small=i;
        for (int j=i+1; j<count; j++)  // loop to find the smallest
           if (numbers[j] < numbers[small])//finds the smallest number
              small=j;
        temp = numbers[i];
        numbers[i] = numbers[small];
        numbers[small] = temp;
    }//end for loop
}//end sort function
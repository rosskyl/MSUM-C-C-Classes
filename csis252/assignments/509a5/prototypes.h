//Author:      Kyle Ross
//Assignment:  5
//Professor:   Brekke
//Due:         Oct 17, 2014
//Description: contains all function prototypes

#include <fstream>

using namespace std;


void read(int numbers[], int& count);
void printValues(const int numbers[], int count, ofstream& outfile);
int sum(const int numbers[], int count);
double calcAverage(const int numbers[], int count);
int lessThanAverage(const int numbers[], int count, double average);
int greaterThanAverage(const int numbers[], int count, double average);
void smallestInt(const int numbers[], int count, int& smallest, int& smallestIndex);
void largestInt(const int numbers[], int count, int& largest, int& largestIndex);
int numOfEvens(const int numbers[], int count);
int numOfOdds(const int numbers[], int count);
void sort(int numbers[], int count);

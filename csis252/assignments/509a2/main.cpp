//Author:      Kyle Ross
//Assignment:  2
//Professor:   Brekke
//Due:         Sep 5, 2014
//Description: reads input from user for scores and outputs the letter grade and percentage
//             outputs a summary of average score, average percentage, and total number of 
//             students and each letter grade

#include <iostream>
#include <iomanip>
using namespace std;

//Constants
const int SENTINEL = -999;//value to enter to end the input

int main() {
    int maxScore;//highest score possible or what the assignment is out of
    int score;
    int numOfStudents = 0;
    int highScore;//highest score achieved
    int lowScore;//lowest score achieved
    int totalScore = 0;
    double totalPercentage = 0.0;
    double aveScore;
    double avePercentage;
    double percentage;//for individual student
    string letterGrade;//for individual student
    int numOfGrades[13] = {};//num of each grade ie 5 A+s, starts at A+, A, A-, B+...F with each as 0
    string wordsForGrades[13];//the words for printing out grades ie Num Of A+s
    
    wordsForGrades[0] = "Number of A+s: ";
    wordsForGrades[1] = "Number of As: ";
    wordsForGrades[2] = "Number of A-s: ";
    wordsForGrades[3] = "Number of B+s: ";
    wordsForGrades[4] = "Number of Bs: ";
    wordsForGrades[5] = "Number of B-s: ";
    wordsForGrades[6] = "Number of C+s: ";
    wordsForGrades[7] = "Number of Cs: ";
    wordsForGrades[8] = "Number of C-s: ";
    wordsForGrades[9] = "Number of D+s: ";
    wordsForGrades[10] = "Number of Ds: ";
    wordsForGrades[11] = "Number of D-s: ";
    wordsForGrades[12] = "Number of Fs: ";
    
    
    
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "\nEnter the maximum score possible: " << endl;
    cin >> maxScore;
    cin.ignore(80,'\n');//gets rid of anything else input besides score
    
    lowScore = maxScore;//set to max to help find the lowest score
    highScore = 0;//set to 0 to help find the lowest score
    
    cout << "\nEnter the student's score or " << SENTINEL << " to end: " << endl;
    cin >> score;//read to get into while loop
    cin.ignore(80,'\n');//gets rid of anything else input besides score
    
    while (score != SENTINEL) {//user enters scores until SENTINEL is entered
	numOfStudents += 1;
	percentage = score/static_cast<double>(maxScore);
	
	//assigning the letter grade for the score
	if (percentage < 0.59) {
	    letterGrade = "F";
	    numOfGrades[12] += 1;
	}//end if
	else if (0.59 <= percentage && percentage < 0.60) {
	    letterGrade = "D-";
	    numOfGrades[11] += 1;
	}//end else if
	else if (0.60 <= percentage && percentage < 0.67) {
	    letterGrade = "D";
	    numOfGrades[10] += 1;
	}//end else if
	else if (0.67 <= percentage && percentage < 0.69) {
	    letterGrade = "D+";
	    numOfGrades[9] += 1;
	}//end else if
	else if (0.69 <= percentage && percentage < 0.70) {
	    letterGrade = "C-";
	    numOfGrades[8] += 1;
	}//end else if
	else if (0.70 <= percentage && percentage < 0.77) {
	    letterGrade = "C";
	    numOfGrades[7] += 1;
	}//end else if
	else if (0.77 <= percentage && percentage < 0.79) {
	    letterGrade = "C+";
	    numOfGrades[6] += 1;
	}//end else if
	else if (0.79 <= percentage && percentage < 0.80) {
	    letterGrade = "B-";
	    numOfGrades[5] += 1;
	}//end else if
	else if (0.80 <= percentage && percentage < 0.87) {
	    letterGrade = "B";
	    numOfGrades[4] += 1;
	}//end else if
	else if (0.87 <= percentage && percentage < 0.89) {
	    letterGrade = "B+";
	    numOfGrades[3] += 1;
	}//end else if
	else if (0.89 <= percentage && percentage < 0.90) {
	    letterGrade = "A-";
	    numOfGrades[2] += 1;
	}//end else if
	else if (0.90 <= percentage && percentage < 0.97) {
	    letterGrade = "A";
	    numOfGrades[1] += 1;
	}//end else if
	else if (0.97 <= percentage) {
	    letterGrade = "A+";
	    numOfGrades[0] += 1;
	}//end else if
	else
	    letterGrade = "N/A";
	
	cout << '\n' << endl;
	cout << setw(15) << left << "Score: " << setw(10) << right << score << endl;
	cout << setw(15) << left << "Percentage: " << setw(10) << right << percentage*100 << " %" << endl;
	cout << setw(15) << left << "Letter Grade: " << setw(10) << right << letterGrade << endl;
	
	if (score > highScore)
	    highScore = score;
	if (score < lowScore)
	    lowScore = score;
	totalScore += score;
	totalPercentage += percentage;
	
	cout << "\nEnter the student's score or " << SENTINEL << " to end: " << endl;
	cin >> score;
	cin.ignore(80,'\n');//gets rid of anything else input besides score
    }//end while loop
    
    aveScore = totalScore / static_cast<double>(numOfStudents);
    avePercentage = totalPercentage / static_cast<double>(numOfStudents);
    
    cout << "\n\n\nSummary\n-------------------------------------" << endl;
    cout << setw(25) << left << "Maximum Score:" << setw(10) << right << maxScore << endl;
    cout << setw(25) << left << "Number of Students:" << setw(10) << right << numOfStudents << endl;
    cout << setw(25) << left << "High Score:" << setw(10) << right << highScore << endl;
    cout << setw(25) << left << "Low Score:" << setw(10) << right << lowScore << endl;
    cout << setw(25) << left << "Average Score:" << setw(10) << right << aveScore << endl;
    cout << setw(25) << left << "Average Percentage:" << setw(10) << right << avePercentage*100 << " %" <<endl;
    for (int index = 0; index < 13; index += 1) {
	cout << setw(25) << left << wordsForGrades[index] << setw(10) << right << numOfGrades[index] << endl;
    }//end for loop
    return 0;
}//end main method
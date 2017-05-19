//File:		studentType.cpp
//Author:	Kyle Ross
//Assignment:	11
//Professor:	Brekke
//Due:		12/8/2014
//Description:	contains impementation for studentType class


#include "studentType.h"
#include "personType.h"
#include <iostream>
#include <iomanip>

using namespace std;




int studentType::maxScore = 0;

istream& operator>>(istream& in, studentType& student) {
    string name = "";//name
    char dummy;//variable to hold each character before being added
    string studentID = "";//student ID
    int score;//score
    
    in.get(dummy);
    while (dummy == '\n' && !in.eof())
	in.get(dummy);
    while (dummy != ';' && dummy != '\n' && !in.eof()) {
	name += dummy;
	in.get(dummy);
    }//end while loop
    
    in.get(dummy);
    while (dummy != ';' && dummy != '\n' && !in.eof()) {
	studentID += dummy;
	in.get(dummy);
    }//end while loop
    
    in >> score;
    
    student.setName(name);
    student.setDragonID(studentID);
    student.setScore(score);;
    return in;
}//end operator>> function

ostream& operator<<(ostream& out, const studentType& student) {
    out << fixed << showpoint << setprecision(2);
    
    out << left << setw(25) << student.getName();
    out << right << setw(11) << student.getDragonID();
    out << right << setw(7) << student.getScore();
    out << right << setw(7) << student.getPercentage() << '%';
    out << right << setw(7) << student.getGrade();
    
    return out;
}//end operator<< function

int studentType::getMaxScore() {
    return maxScore;
}//end getMaxScore method--static
	
void studentType::setMaxScore(int tmpMaxScore) {
    maxScore = tmpMaxScore;
}//end setMaxScore method--static

studentType::studentType() : personType(){
    setDragonID("");
    setScore(0);
}//end studentType method--default constructor

studentType::studentType(string& tmpName, string& tmpDragonID, 
			 int tmpScore) : personType() {
    setDragonID(tmpDragonID);
    setScore(tmpScore);
    setName(tmpName);
}//end studentType method--constructor

string studentType::getDragonID() const {
    return dragonID;
}//end getDragonID method

void studentType::setDragonID(string tmpDragonID) {
    dragonID = tmpDragonID;
}//end setDragonID method

int studentType::getScore() const {
    return score;
}//end getScore method

void studentType::setScore(int tmpScore) {
    score = tmpScore;
}//end setScore method

double studentType::getPercentage() const {
    double percentage;//percentage
    
    percentage = score / static_cast<double>(maxScore) * 100;
    
    return percentage;
}//end getPercentage method

char studentType::getGrade() const {
    char grade;//grade
    float percentage = getPercentage();//percentage
    
    if (percentage < 60)
	grade = 'F';
    else if (60 <= percentage && percentage < 70)
	grade = 'D';
    else if (70 <= percentage && percentage < 80)
	grade = 'C';
    else if (80 <= percentage && percentage < 90)
	grade = 'B';
    else if (90 <= percentage)
	grade = 'A';
    else
	return 'z';
    
    return grade;
}//end getGrade method

bool studentType::operator==(const studentType& otherStudent) const {
    return getName() == otherStudent.getName();
}//end operator== method

bool studentType::operator<(const studentType& otherStudent) const {
    return getName() < otherStudent.getName();
}//end operator< method

bool studentType::operator!=(const studentType& otherStudent) const {
    return getName() != otherStudent.getName();
}//end operator!= method

bool studentType::operator<=(const studentType& otherStudent) const {
    return getName() <= otherStudent.getName();
}//end operator<= method

bool studentType::operator>(const studentType& otherStudent) const {
    return getName() > otherStudent.getName();
}//end operator> method

bool studentType::operator>=(const studentType& otherStudent) const {
    return getName() >= otherStudent.getName();
}//end operator>= method
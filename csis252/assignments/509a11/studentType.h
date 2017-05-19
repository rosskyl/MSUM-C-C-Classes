//File:		studentType.h
//Author:	Kyle Ross
//Assignment:	11
//Professor:	Brekke
//Due:		12/8/2014
//Description:	contains specification for studentType class

#ifndef __studentType_h__
#define __studentType_h__


#include "personType.h"

class studentType: public personType {
    public:
	//Method:		getMaxScore
	//Description:		retrieves the max score for all students
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		maxScore(int)
	static int getMaxScore();
	
	//Method:		setMaxScore
	//Description:		updates the max score for all students
	//Preconditions:	none
	//Postconditions:	maxScore changed to tmpMaxScore
	//Input:		tmpMaxScore(int)
	//Output:		none
	static void setMaxScore(int tmpMaxScore);
	
	//Method:		studentType
	//Description:		default constructor
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		none
	studentType();
	
	//Method:		studentType
	//Description:		constructor
	//Preconditions:	none
	//Postconditions:	none
	//Input:		tmpName(string)
	//			tmpDragonID(string)
	//			tmpScore(int)
	//Output:		none
	studentType(string& tmpName, string& tmpDragonID, int tmpScore);
	
	//Method:		getDragonID
	//Description:		retrieves the student's dragon ID
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		dragonID(string)
	string getDragonID() const;
	
	//Method:		setDragonID
	//Description:		updates the student's dragon ID
	//Preconditions:	none
	//Postconditions:	dragonID changed to tmpDragonID
	//Input:		tmpDragonID
	//Output:		none
	void setDragonID(string tmpDragonID);
	
	//Method:		getScore
	//Description:		retrieves the student's score
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		score(int)
	int getScore() const;
	
	//Method:		setScore
	//Description:		updates the student's score
	//Preconditions:	none
	//Postconditions:	score changed to tmpScore
	//Input:		tmpScore(int)
	//Output:		none
	void setScore(int tmpScore);
	
	//Method:		getPercentage
	//Description:		retrieves the student's percentage
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		percentage(double)
	double getPercentage() const;
	
	//Method:		getGrade
	//Description:		retrieves the student's grade
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		grade(char)
	char getGrade() const;
	
	//Method:		operator==
	//Description:		returns whether student's name is equal to
	//			otherStudent's name
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherStudent(studentType)
	//Output:		bool
	bool operator==(const studentType& otherStudent) const;
	
	//Method:		operator<
	//Description:		returns whether student's name less than
	//			otherStudent's name
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherStudent(studentType)
	//Output:		bool
	bool operator<(const studentType& otherStudent) const;
	
	//Method:		operator!=
	//Description:		returns whether student's name is not equal
	//			to otherStudent's name
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherStudent(studentType)
	//Output:		bool
	bool operator!=(const studentType& otherStudent) const;
	
	//Method:		operator<=
	//Description:		returns whether student's name less than
	//			or equal otherStudent's name
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherStudent(studentType)
	//Output:		bool
	bool operator<=(const studentType& otherStudent) const;
	
	//Method:		operator>
	//Description:		returns whether student's name greater than
	//			otherStudent's name
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherStudent(studentType)
	//Output:		bool
	bool operator>(const studentType& otherStudent) const;
	
	//Method:		operator<
	//Description:		returns whether student's name greater than
	//			or equal otherStudent's name
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherStudent(studentType)
	//Output:		bool
	bool operator>=(const studentType& otherStudent) const;
	
    private:
	static int maxScore;//max score for all students
	
	string dragonID;//student's dragon ID
	int score;//student's score
};//end studentType class

//Description:		in stream
//Input:		in (istream)
//			student(studentType)
//Ouput:		in (istream)
//Preconditions:	none
//PostConditions:	student is changed to the input
//			needs to be in the format:
//				name;id;score
istream& operator>>(istream& in, studentType& student);

//Description:		out stream
//Input:		out (ostream)
//			student(studentType)
//Ouput:		out (ostream)
//Preconditions:	none
//PostConditions:	student is output to the ostream
ostream& operator<<(ostream& out, const studentType& student);

#endif
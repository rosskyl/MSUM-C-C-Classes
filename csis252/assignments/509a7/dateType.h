//File:		dateType.h
//Author:	Kyle Ross
//Assignment:	7
//Professor:	Brekke
//Due:		10/31/2014
//Description:	contains specification for dateType class


#ifndef __dateType_h__
#define __dateType_h__

#include <iostream>

using namespace std;



class dateType {
    public:
	//Method:		dateType
	//Description:		default constructor
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		none
	dateType();
	
	//Method:		dateType
	//Description:		other constructor
	//Preconditions:	given date is a correct date
	//Postconditions:	none
	//Input:		tmpYear(int) year
	//			tmpMonth(int) month
	//			tmpDay(int) day
	//Output:		none
	dateType(int tmpYear, int tmpMonth, int tmpDay);
	
	//Method:		setDate
	//Description:		sets the date
	//Preconditions:	given date is a correct date
	//Postconditions:	year changed to tmpYear
	//			month changed to tmpMonth
	//			day changed to tmpDay
	//Input:		tmpYear(int) year
	//			tmpMonth(int) month
	//			tmpDay(int) day
	//Output:		none
	void setDate(int year, int month, int day);
	
	//Method:		getYear
	//Description:		gets the year
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		year(int)
	int getYear() const;
	
	//Method:		getMonth
	//Description:		gets the month
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		month(int)
	int getMonth() const;
	
	//Method:		getDay
	//Description:		gets the day
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		day(int)
	int getDay() const;
	
	//Method:		getDate
	//Description:		gets the date
	//Preconditions:	none
	//Postconditions:	year changed to date's year
	//			month changed to date's month
	//			day changed to date's day
	//Input:		year(int)
	//			month(int)
	//			day(int)
	//Output:		none
	void getDate(int& year, int& month, int& day) const;
	
	//Method:		operator==
	//Description:		returns whether date and otherDate are equal
	//Preconditions:	both dates exist
	//Postconditions:	none
	//Input:		otherDate(dateType)
	//Output:		equal(bool)
	bool operator==(const dateType& otherDate) const;
	
	//Method:		operator!=
	//Description:		returns whether date and otherDate are not equal
	//Preconditions:	both dates exist
	//Postconditions:	none
	//Input:		otherDate(dateType)
	//Output:		equal(bool)	
	bool operator!=(const dateType& otherDate) const;
	
	//Method:		operator<
	//Description:		returns whether date is less than otherDate
	//Preconditions:	both dates exist
	//Postconditions:	none
	//Input:		otherDate(dateType)
	//Output:		equal(bool)
	bool operator<(const dateType& otherDate) const;
	
	//Method:		operator<=
	//Description:		returns whether date is less than or equal to
	//			otherDate
	//Preconditions:	both dates exist
	//Postconditions:	none
	//Input:		otherDate(dateType)
	//Output:		equal(bool)	
	bool operator<=(const dateType& otherDate) const;
	
	//Method:		operator>
	//Description:		returns whether date is greater than otherDate
	//Preconditions:	both dates exist
	//Postconditions:	none
	//Input:		otherDate(dateType)
	//Output:		equal(bool)
	bool operator>(const dateType& otherDate) const;
	
	//Method:		operator>=
	//Description:		returns whether date is greater than or equal
	//			to otherDate
	//Preconditions:	both dates exist
	//Postconditions:	none
	//Input:		otherDate(dateType)
	//Output:		equal(bool)
	bool operator>=(const dateType& otherDate) const;
    
    private:
	int year;//year of the date
	int month;//month of the date
	int day;//day of the date
};//end dateType class

//Method:		operator<<
//Description:		outputs the date in the format "yyyy-mm-dd" to the
//			given ostream
//Preconditions:	none
//Postconditions:	date output to the given ostream
//Input:		out(ostream) stream to output to
//			date(dateType) date to output
//Output:		out(ostream)
ostream& operator<<(ostream& out, const dateType& date);

//Method:		operator>>
//Description:		inputs the date in the format "yyyy-mm-dd" to the
//			given istream
//Preconditions:	date input is a correct date
//Postconditions:	date input from the given istream
//Input:		in(istream) stream to get input from
//			date(dateType) date to input
//Output:		in(istream)
istream& operator>>(istream& in, dateType& date);


#endif
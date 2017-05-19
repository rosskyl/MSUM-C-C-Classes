//File:		dateType.cpp
//Author:	Kyle Ross
//Assignment:	7
//Professor:	Brekke
//Due:		10/31/2014
//Description:	contains implementation for dateType class


#include "dateType.h"


using namespace std;



ostream& operator<<(ostream& out, const dateType& date) {
    out << date.getYear() << "-" << date.getMonth() << "-"
	<< date.getDay();
    return out;
}//end operator<< function

istream& operator>>(istream& in, dateType& date) {
    int year;
    int month;
    int day;
    char temp;
    
    in >> year >> temp >> month >> temp >> day;
    
    date.setDate(year, month, day);
    
    return in;
}//end operator>> function

dateType::dateType() {
    year = 0;
    month = 0;
    day = 0;
}//end dateType method--default constructor

dateType::dateType(int tmpYear, int tmpMonth, int tmpDay) {
    setDate(tmpYear, tmpMonth, tmpDay);
}//end dateType method--constructor

void dateType::setDate(int tmpYear, int tmpMonth, int tmpDay) {
    year = tmpYear;
    month = tmpMonth;
    day = tmpDay;
}//end setDate method

int dateType::getYear() const {
    return year;
}//end getYear method

int dateType::getMonth() const {
    return month;
}//end getMonth method

int dateType::getDay() const {
    return day;
}//end getDay method

void dateType::getDate(int& year, int& month, int& day) const {
    year = getYear();
    month = getMonth();
    day = getDay();
}//end getDate method

bool dateType::operator==(const dateType& otherDate) const {
    if (getYear() == otherDate.getYear() && getMonth() == otherDate.getMonth()
	    && getDay() == otherDate.getDay())
	return true;
    else
	return false;
}//end operator== method

bool dateType::operator<(const dateType& otherDate) const {
    if (getYear() < otherDate.getYear())//year less than other year
	return true;
    else if (getYear() == otherDate.getYear())//years equal test month
	if (getMonth() < otherDate.getMonth())//month less than other month
	    return true;
	else if (getMonth() == otherDate.getMonth())//months equal test day
	    if (getDay() < otherDate.getDay())//day less than other day
		return true;
	    else return false;//other day less than day
	else return false;//other month less than month
    else return false;//other year less than year
}//end operator< method

bool dateType::operator!=(const dateType& otherDate) const {
    return !(*this == otherDate);
}//end operator!= method

bool dateType::operator<=(const dateType& otherDate) const {
    return (*this == otherDate) || (*this < otherDate);
}//end operator<= method

bool dateType::operator>(const dateType& otherDate) const {
    return (*this != otherDate) && !(*this < otherDate);
}//end operator>

bool dateType::operator>=(const dateType& otherDate) const {
    return (*this == otherDate) || !(*this < otherDate);
}//end operator>= method
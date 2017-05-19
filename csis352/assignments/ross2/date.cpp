//Author:      Kyle Ross
//Assignment:  2
//Professor:   Brekke
//Due:         Feb 16, 2016
//Filename:    date.cpp
//Description: contains implementations for Date and DateException classes


#include <ctime>
#include <iostream>
#include <sstream>
#include "date.h"




namespace DateNameSpace {
    dateFormat Date::format = NUMERIC;

    dateArithmetic Date::arithmetic = DAYS;
    
    void Date::outputFormat(dateFormat newFormat) {
	format = newFormat;
    }
    
    dateFormat Date::getFormat() {
	return format;
    }
    
    int Date::getNumDaysInMonth(int month, int year) throw (DateException) {
	switch(month) {
	    case 1: return 31;
	    case 2:
		if (leapyear(year))
		    return 29;
		else
		    return 28;
	    case 3: return 31;
	    case 4: return 30;
	    case 5: return 31;
	    case 6: return 30;
	    case 7: return 31;
	    case 8: return 31;
	    case 9: return 30;
	    case 10: return 31;
	    case 11: return 30;
	    case 12: return 31;
	}
	//thrown because if program reaches here, invalid month
	stringstream stream;
	stream << "invalid month,month=" << month;
	throw DateException(stream.str());
    }
    
    bool Date::leapyear(int year)
    {
	if (year % 4 == 0 && year % 100 != 0)
	    return true;
	if (year % 400 == 0)
	    return true;
	return false;
    }
    
    Date Date::Today() {
	tm *current;
	time_t lt;
	lt = time('\0');
	current = localtime(&lt);
	int year = current->tm_year + 1900;
	int month = current->tm_mon+1;
	int day = current->tm_mday;
	return Date(month, day, year);
    }

    dateArithmetic Date::getArithmetic() {
        return arithmetic;
    }

    void Date::Arithmetic(dateArithmetic arith) {
        arithmetic = arith;
    }
    
    Date::Date() {
	setToday();
    }
    
    Date::Date(int tmpMonth, int tmpDay, int tmpYear) throw (DateException) {
	try {
	    setDate(tmpMonth, tmpDay, tmpYear);
	}
	catch (DateException e) {
	    throw e;
	}
    }
    
    void Date::setToday() {
	Date today = Date::Today();
	month = today.getMonth();
	day = today.getDay();
	year = today.getYear();
    }
    
    void Date::setDate(int tmpMonth, int tmpDay, int tmpYear) throw (DateException) {
	if (tmpMonth < 1 || tmpMonth > 12) {
	    stringstream stream;
	    stream << "invalid month, month=" << tmpMonth;
	    throw DateException(stream.str());
	}
	if (tmpYear < 0) {
	    stringstream stream;
	    stream << "invalid month, year=" << tmpYear;
	    throw DateException(stream.str());
	}
	if (tmpDay < 1 || tmpDay > getNumDaysInMonth(tmpMonth, tmpYear)) {
	    stringstream stream;
	    stream << "invalid month, month=" << tmpMonth;
	    stream << ", day=" << tmpDay;
	    stream << ", year=" << tmpYear;
	    throw DateException(stream.str());
	}
	
	month = tmpMonth;
	day = tmpDay;
	year = tmpYear;
    }
    
    int Date::getYear() const {
	return year;
    }
    
    int Date::getMonth() const {
	return month;
    }
    
    int Date::getDay() const {
	return day;
    }
    
    string Date::getMonthWord() const {
	switch (getMonth()) {
	    case 1: return "January";
	    case 2: return "February";
	    case 3: return "March";
	    case 4: return "April";
	    case 5: return "May";
	    case 6: return "June";
	    case 7: return "July";
	    case 8: return "August";
	    case 9: return "September";
	    case 10: return "October";
	    case 11: return "November";
	    case 12: return "December";
	}
    }
		 
    string Date::getDayOfWeek() const {
	int centuries;
	int months;
	int dayofweek;
	centuries = (3-year/100%4)*2;
	switch (month) {
	    case 1  : if (leapyear(year))
		months = 6;
		else
		    months = 0; break;
	    case 2  : if (leapyear(year))
		months = 2;
		else
		    months = 3; break;
	    case 3  : months = 3; break;
	    case 4  : months = 6; break;
	    case 5  : months = 1; break;
	    case 6  : months = 4; break;
	    case 7  : months = 6; break;
	    case 8  : months = 2; break;
	    case 9  : months = 5; break;
	    case 10 : months = 0; break;
	    case 11 : months = 3; break;
	    case 12 : months = 5; break;
	}
	dayofweek = (centuries+year%100+year%100/4+months+day)%7;
	switch (dayofweek) {
	    case 0: return "Sunday";
	    case 1: return "Monday";
	    case 2: return "Tuesday";
	    case 3: return "Wednesday";
	    case 4: return "Thursday";
	    case 5: return "Friday";
	    case 6: return "Saturday";
	}
    }
    
    Date Date::operator=(const Date& rightDate) {
	month = rightDate.getMonth();
	day = rightDate.getDay();
	year = rightDate.getYear();
	return *this;
    }
    
    bool Date::operator==(const Date& rightDate) const {
	return ((getMonth() == rightDate.getMonth()) &&
	  (getDay() == rightDate.getDay()) &&
	  (getYear() == rightDate.getYear()));
    }
    
    bool Date::operator!=(const Date& rightDate) const {
	return not (*this == rightDate);
    }
    
    bool Date::operator<(const Date& rightDate) const {
	if (getYear() < rightDate.getYear())
	    return true;
	else if (getYear() > rightDate.getYear())
	    return false;
	//years are equal
	if (getMonth() < rightDate.getMonth())
	    return true;
	else if (getMonth() > rightDate.getMonth())
	    return false;
	//years and months are equal
	if (getDay() < rightDate.getDay())
	    return true;
	return false;//if equal still not true
    }
    
    bool Date::operator<=(const Date& rightDate) const {
	return ((*this < rightDate) || (*this == rightDate));
    }
    
    bool Date::operator>(const Date& rightDate) const {
	return not (*this <= rightDate);
    }
    
    bool Date::operator>=(const Date& rightDate) const {
	return not (*this < rightDate);
    }

    Date Date::operator++() {
        switch(getArithmetic()) {
            case DAYS:
                day += 1;
                break;
            case YEARS:
                year += 1;
                break;
        }
        checkMonth();
        checkDay();
        return *this;
    }

    Date Date::operator++(int) {
        Date tmpDate = *this;
        switch(getArithmetic()) {
            case DAYS:
                day += 1;
                break;
            case YEARS:
                year += 1;
                break;
        }
        checkMonth();
        checkDay();
        return tmpDate;
    }
    
    Date Date::operator--() {
        switch(getArithmetic()) {
            case DAYS:
                day -= 1;
                break;
            case YEARS:
                year -= 1;
                break;
        }
        checkMonth();
        checkDay();
        return *this;
    }

    Date Date::operator--(int) {
        Date tmpDate = *this;
        switch(getArithmetic()) {
            case DAYS:
                day -= 1;
                break;
            case YEARS:
                year -= 1;
                break;
        }
        checkMonth();
        checkDay();
        return tmpDate;
    }

    int Date::operator-(const Date& rightDate) const{
        switch(getArithmetic()) {
            case YEARS:
                Arithmetic(DAYS);
                int days;
                days = (*this - rightDate);
                Arithmetic(YEARS);
                return days / 365;
            case DAYS:
                if (*this == rightDate)
                    return 0;
                else if (*this > rightDate) {
                    Date tmpDate = *this;
                    int days = 0;
                    while (tmpDate > rightDate) {
                        days += 1;
                        tmpDate--;
                    }
                    return days;
                }
                else if (*this < rightDate) {
                    return -(rightDate - *this);
                }
        }
    }
    
    Date Date::operator+(int amount) const{
	Date tmpDate = *this;
	switch(getArithmetic()) {
	    case DAYS:
		tmpDate.day += amount;
		break;
	    case YEARS:
		tmpDate.year += amount;
		break;
	}
	tmpDate.checkMonth();
	tmpDate.checkDay();
	
	return tmpDate;
    }
    
    Date Date::operator-(int amount) const {
	return *this + -amount;
    }

    int Date::daysUntil() const {
        Date tmpDate;
        tmpDate.setDate(tmpDate.getMonth(), tmpDate.getDay(), getYear());
        if (*this < tmpDate)
            tmpDate.setDate(tmpDate.getMonth(), tmpDate.getDay(), getYear()-1);
        return *this - tmpDate;
    }

    void Date::checkMonth() {
        if (getMonth() < 1) {
            year -= 1;
            month += 12;
        }
        else if (getMonth() > 12) {
            year += 1;
            month -= 12;
        }
    }

    void Date::checkDay() {
        if (getDay() < 1) {
            month -= 1;
            checkMonth();
            day += getNumDaysInMonth(month, year);
        }
        else if (getDay() > getNumDaysInMonth(month, year)) {
            day -= getNumDaysInMonth(month, year);
            month += 1;
            checkMonth();
        }
    }

    ostream& operator<<(ostream& out, const Date& date) {
        stringstream stream;
	switch (Date::getFormat()) {
	    case DAYNUMERIC:
		stream << date.getDayOfWeek() << ", ";
	    case NUMERIC:
		stream << date.getMonth() << "/" << date.getDay() << "/" << date.getYear();
		break;
	    case DAYTEXT:
		stream << date.getDayOfWeek() << ", ";
	    case TEXT:
		stream << date.getMonthWord() << " " << date.getDay() << ", " << date.getYear();
		break;
	}
        out << stream.str();
	
	return out;
    }
    
    
}//end DateNameSpace

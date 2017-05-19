//Author:      Kyle Ross
//Assignment:  2
//Professor:   Brekke
//Due:         Feb 16, 2016
//Filename:    date.h
//Description: contains specifications for Date and DateException classes

#ifndef _DATE_H_
#define _DATE_H_

#include <string>
#include <iostream>
using namespace std;

namespace DateNameSpace {
    
    // format for printing the day
    enum dateFormat {TEXT, DAYTEXT, NUMERIC, DAYNUMERIC};

    // format for adding numbers to a date
    enum dateArithmetic {DAYS, YEARS};
    
    
    class DateException {
	public:
	    //Method:		DateException
	    //Description:	default constructor
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		m(string) the message
	    //Output:		none
	    DateException(const string& m="") {
		msg = m;
	    }
	    
	    //Method:		what
	    //Description:	returns the message
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		msg(string) the message of the exception
	    string what() {
		return "DateException: " + msg;
	    }
	    
	private:
	    string msg;//message
    };
    
    class Date {
	public:
	    //Method:		outputFormat
	    //Description:	sets the output format for printing
	    //Preconditions:	none
	    //Postconditions:	outputFormat changed for all instances of Date
	    //Input:		newFormat(dateFormat)
	    //Output:		none
	    static void outputFormat(dateFormat newFormat);
	    
	    //Method:		getFormat
	    //Description:	gets the format for printing
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		format(dateFormat)
	    static dateFormat getFormat();
	    
	    //Method:		getNumDaysInMonth
	    //Description:	gets the number of days in a given month
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		month(int)
	    //			year(int)
	    //Output:		days(int)
	    //Throws:		DateException if given invalid month or year
	    static int getNumDaysInMonth(int month, int year) throw (DateException);
	    
	    //Method:		leapyear
	    //Description:	determines if the year is a leapyear
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		year(int)
	    //Output:		bool true if year is a leap year, false otherwise
	    static bool leapyear(int year);
	    
	    //Method:		Today
	    //Description:	gets todays date
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		today(Date)
	    static Date Today();

	    //Method:		getArithmetic
	    //Description:	gets the arithmetic format
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		arith(dateArithmetic)
            static dateArithmetic getArithmetic();

	    //Method:		Arithmetic
	    //Description:	sets the arithmetic format
	    //Preconditions:	none
	    //Postconditions:	arithmetic format changed for all instances of Date
	    //Input:		arith(dateArithmetic)
	    //Output:		none
            static void Arithmetic(dateArithmetic arith);
	    
	    //Method:		date
	    //Description:	default constructor
	    //Preconditions:	none
	    //Postconditions:	set to todays date
	    //Input:		none
	    //Output:		none
	    Date();
	    
	    //Method:		Date
	    //Description:	constructor
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		tmpMonth(int)
	    //			tmpDay(int)
	    //			tmpYear(int)
	    //Output:		none
	    //Throws:		DateException if given invalid date
	    Date(int tmpMonth, int tmpDay, int tmpYear) throw (DateException);
	    
	    //Method:		setToday
	    //Description:	sets date as todays date
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		none
	    void setToday();
	    
	    //Method:		setDate
	    //Description:	sets the date to input
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		tmpMonth(int)
	    //			tmpDay(int)
	    //			tmpYear(int)
	    //Output:		none
	    //Throws:		DateException if given invalid date
	    void setDate(int tmpMonth, int tmpDay, int tmpYear) throw (DateException);
	    
	    //Method:		getYear
	    //Description:	gets the year
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		year(int)
	    int getYear() const;
	    
	    //Method:		getMonth
	    //Description:	gets the month
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		month(int)
	    int getMonth() const;
	    
	    //Method:		getDay
	    //Description:	gets the day
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		day(int)
	    int getDay() const;
	    
	    //Method:		getMonthWord
	    //Description:	gets the word for the month (i.e. if the month is 1, January is returned)
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		monthWord(string)
	    string getMonthWord() const;
	    
	    //Method:		getDayOfWeek
	    //Description:	gets the day of the week
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		dayOfWeek(string)
	    string getDayOfWeek() const;
	    
	    //Method:		operator=
	    //Description:	sets the date as rightDate
	    //Preconditions:	none
	    //Postconditions:	changed to rightDate
	    //Input:		rightDate(Date)
	    //Output:		none
	    Date operator=(const Date& rightDate);
	    
	    //Method:		operator==
	    //Description:	returns whether this is equal to rightDate
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightDate(Date)
	    //Output:		bool true if this is equal to rightDate and false otherwise
	    bool operator==(const Date& rightDate) const;
	    
	    //Method:		operator!=
	    //Description:	returns whether this is not equal to rigtDate
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightDate(Date)
	    //Output:		bool true if this is not equal to rightDate and false otherwise
	    bool operator!=(const Date& rightDate) const;
	    
	    //Method:		operator<
	    //Description:	returns whether this is less than to rightDate
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightDate(Date)
	    //Output:		bool true if this is less than to rightDate and false otherwise
	    bool operator<(const Date& rightDate) const;
	    
	    //Method:		operator<=
	    //Description:	returns whether this is less than or equal to rightDate
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightDate(Date)
	    //Output:		bool true if this is less than or equal to rightDate and false otherwise
	    bool operator<=(const Date& rightDate) const;
	    
	    //Method:		operator>
	    //Description:	returns whether this is greater than to rightDate
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightDate(Date)
	    //Output:		bool true if this is greater than to rightDate and false otherwise
	    bool operator>(const Date& rightDate) const;
	    
	    //Method:		operator>=
	    //Description:	returns whether this is greater than or equal to rightDate
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightDate(Date)
	    //Output:		bool true if this is less than to rightDate and false otherwise
	    bool operator>=(const Date& rightDate) const;

	    //Method:		operator++
	    //Description:	preincrement the date
	    //Preconditions:	none
	    //Postconditions:	adds 1 to either the day or year based on what arithmetic is set to
	    //Input:		none
	    //Output:		Date
            Date operator++();

	    //Method:		operator++
	    //Description:	postincrement the date
	    //Preconditions:	none
	    //Postconditions:	adds 1 to either the day or year based on what arithmetic is set to
	    //Input:		int
	    //Output:		Date before increment
            Date operator++(int);

	    //Method:		operator--
	    //Description:	predecrement the date
	    //Preconditions:	none
	    //Postconditions:	subtracts 1 to either the day or year based on what arithmetic is set to
	    //Input:		none
	    //Output:		Date
            Date operator--();

	    //Method:		operator--
	    //Description:	postdecrement the date
	    //Preconditions:	none
	    //Postconditions:	subtracts 1 to either the day or year based on what arithmetic is set to
	    //Input:		int
	    //Output:		Date before decrement
            Date operator--(int);
	    
	    //Method:		operator+
	    //Description:	adds amount to either day or year based on what arithmetic is set to
	    //Preconditions:	none
	    //Postconditions:	day or year changed based on what arithmetic is set to
	    //Input:		amount(int)
	    //Output:		Date
	    Date operator+(int amount) const;
	    
	    //Method:		operator-
	    //Description:	subtracts amount to either day or year based on what arithmetic is set to
	    //Preconditions:	none
	    //Postconditions:	day or year changed based on what arithmetic is set to
	    //Input:		amount(int)
	    //Output:		Date
	    Date operator-(int amount) const;

	    //Method:		operator-
	    //Description:	finds either the days or years between the 2 dates based on what arithmetic is set to
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightDate(Date)
	    //Output:		int
            int operator-(const Date& rightDate) const;

	    //Method:		daysUntil
	    //Description:	finds the days until the date occures disregarding the year
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		int
            int daysUntil() const;
	    
	private:

	    //Method:		checkMonth
	    //Description:	checks to ensure the month is valid, if it isn't then makes the necesarry
	    //			changes to make it valid--DOES NOT CHECK DAYS
	    //Preconditions:	none
	    //Postconditions:	changed to a valid date based on the month
	    //Input:		none
	    //Output:		none
            void checkMonth();

	    //Method:		checkDay
	    //Description:	checks to ensure the day is valid, if it isn't then makes the necesarry
	    //			changes to make it valid--DOES NOT CHECK MONTHS
	    //Preconditions:	none
	    //Postconditions:	changed to a valid date based on the day
	    //Input:		none
	    //Output:		none
            void checkDay();

	    static dateFormat format;//format for printing the date
            static dateArithmetic arithmetic;//format for adding numbers and dates
	    int year;//year for the date
	    int month;//month for the date
	    int day;//day for the date
    };   
    
    //Method:		operator<<
    //Description:	outputs the date onto out based on the dateFormat
    //Preconditions:	none
    //Postconditions:	none
    //Input:		out(ostream)
    //			date(Date)
    //Output:		out(ostream)
    ostream& operator<<(ostream& out, const Date& date);
    
}
#endif

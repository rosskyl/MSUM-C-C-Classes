//Author:      Kyle Ross
//Assignment:  1
//Professor:   Brekke
//Due:         Jan 28, 2016
//Filename:    currency.h
//Description: contains specification for Currency class


//need to have 3 constructors, one for int, one for double, one blank
#ifndef _CURRENCY_H_
#define _CURRENCY_H_

#include <iostream>

using namespace std;


enum outputRound {Round, Truncate, ShowCents};

enum outputDollarSign {NoDollarSign, ShowDollarSign};

class Currency {
    public:
	static void setFormat(outputRound format);
	
	static void setFormat(outputDollarSign format);
	
	static outputRound getRoundFormat();
	
	static outputDollarSign getDollarFormat();
	
	//Method:		Currency
	//Description:		default constructor
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		none
	Currency();
	
	//Method:		Currency
	//Description:		int constructor
	//Preconditions:	none
	//Postconditions:	none
	//Input:		tmpDollars(int) dollars
	//Output:		none
	explicit Currency(int tmpDollars);
	
	//Method:		Currency
	//Description:		double constructor
	//Preconditions:	none
	//Postconditions:	none
	//Input:		value(double) value of currency
	//Output:		none
	explicit Currency(double value);
	
	//Method:		Currency
	//Description:		constructor with both cents and dollars
	//Preconditions:	none
	//Postconditions:	none
	//Input:		tmpDollars(long)
	//			tmpCents(short)
	//Output:		none
	explicit Currency(long tmpDollars, short tmpCents);
	
	
	//Method:		getDollars
	//Description:		gets the dollars
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		dollars(long)
	long getDollars() const;
	
	//Method:		getCents
	//Description:		gets the cents
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		cents(short)
	short getCents() const;
	
	
	//Method:		operator=
	//Description:		assigns this as the rightCurrency
	//Preconditions:	none
	//Postconditions:	dollars set to rightCurrency's dollars
	//			cents set to rightCurrency's cents
	//Input:		rightCurrency(Currency) other currency
	//Output:		none
	Currency& operator=(const Currency& rightCurrency);
	
	//Method:		operator=
	//Description:		assigns this as the tmpDollars
	//Preconditions:	none
	//Postconditions:	dollars set to tmpDollars
	//			cents set to 0
	//Input:		tmpDollars(int) dollars
	//Output:		none
	Currency& operator=(int tmpDollars);
	
	//Method:		operator=
	//Description:		assigns this as the value
	//Preconditions:	none
	//Postconditions:	dollars set to values int
	//			cents set to values decimals
	//Input:		value(double) value of currency
	//Output:		none
	Currency& operator=(double value);
	
	
	//Method:		operator==
	//Description:		returns whether this and rightCurrency are equal
	//Preconditions:	none
	//Postconditions:	none
	//Input:		rightCurrency(Currency)
	//Output:		none
	bool operator==(const Currency& rightCurrency) const;
	
	//Method:		operator!=
	//Description:		returns whether this and rightCurrency are not equal
	//Preconditions:	none
	//Postconditions:	none
	//Input:		rightCurrency(Currency)
	//Output:		none
	bool operator!=(const Currency& rightCurrency) const;
	
	//Method:		operator<
	//Description:		returns whether this is less than rightCurrency
	//Preconditions:	none
	//Postconditions:	none
	//Input:		rightCurrency(Currency)
	//Output:		none
	bool operator<(const Currency& rightCurrency) const;
	
	//Method:		operator<=
	//Description:		returns whether this is less than or equal to rightCurrency
	//Preconditions:	none
	//Postconditions:	none
	//Input:		rightCurrency(Currency)
	//Output:		none
	bool operator<=(const Currency& rightCurrency) const;
	
	//Method:		operator>
	//Description:		returns whether this is greater than rightCurrency
	//Preconditions:	none
	//Postconditions:	none
	//Input:		rightCurrency(Currency)
	//Output:		none
	bool operator>(const Currency& rightCurrency) const;
	
	//Method:		operator>=
	//Description:		returns whether this is greater than or equal to rightCurrency
	//Preconditions:	none
	//Postconditions:	none
	//Input:		rightCurrency(Currency)
	//Output:		none
	bool operator>=(const Currency& rightCurrency) const;
	
	
	//Method:		operator==
	//Description:		returns whether this and tmpDollars are equal
	//Preconditions:	none
	//Postconditions:	none
	//Input:		tmpDollars(int) dollars
	//Output:		none
	bool operator==(int tmpDollars) const;
	
	//Method:		operator!=
	//Description:		returns whether this and tmpDollars are not equal
	//Preconditions:	none
	//Postconditions:	none
	//Input:		tmpDollars(int) dollars
	//Output:		none
	bool operator!=(int tmpDollars) const;
	
	//Method:		operator<
	//Description:		returns whether this is less than tmpDollars
	//Preconditions:	none
	//Postconditions:	none
	//Input:		tmpDollars(int) dollars
	//Output:		none
	bool operator<(int tmpDollars) const;
	
	//Method:		operator<=
	//Description:		returns whether this is less than or equal tmpDollars
	//Preconditions:	none
	//Postconditions:	none
	//Input:		tmpDollars(int) dollars
	//Output:		none
	bool operator<=(int tmpDollars) const;
	
	//Method:		operator>
	//Description:		returns whether this is greater than tmpDollars
	//Preconditions:	none
	//Postconditions:	none
	//Input:		tmpDollars(int) dollars
	//Output:		none
	bool operator>(int tmpDollars) const;
	
	//Method:		operator>=
	//Description:		returns whether this is greater than or equal to tmpDollars
	//Preconditions:	none
	//Postconditions:	none
	//Input:		tmpDollars(int) dollars
	//Output:		none
	bool operator>=(int tmpDollars) const;
	
	
	//Method:		operator==
	//Description:		returns whether this and value are equal
	//Preconditions:	none
	//Postconditions:	none
	//Input:		value(double) value of currency
	//Output:		none
	bool operator==(double value) const;
	
	//Method:		operator!=
	//Description:		returns whether this and value are not equal
	//Preconditions:	none
	//Postconditions:	none
	//Input:		value(double) value of currency
	//Output:		none
	bool operator!=(double value) const;
	
	//Method:		operator<
	//Description:		returns whether this is less than value
	//Preconditions:	none
	//Postconditions:	none
	//Input:		value(double) value of currency
	//Output:		none
	bool operator<(double value) const;
	
	//Method:		operator<=
	//Description:		returns whether this is less than or equal to value
	//Preconditions:	none
	//Postconditions:	none
	//Input:		value(double) value of currency
	//Output:		none
	bool operator<=(double value) const;
	
	//Method:		operator>
	//Description:		returns whether this is greater than value
	//Preconditions:	none
	//Postconditions:	none
	//Input:		value(double) value of currency
	//Output:		none
	bool operator>(double value) const;
	
	//Method:		operator>=
	//Description:		returns whether this is greater than or equal to value
	//Preconditions:	none
	//Postconditions:	none
	//Input:		value(double) value of currency
	//Output:		none
	bool operator>=(double value) const;
	
	
	//Method:		operator+
	//Description:		returns this plus rightCurrency
	//Preconditions:	none
	//Postconditions:	rightCurrency's dollars added to dollars
	//			rightCurrency's cents added to cents
	//Input:		rightCurrency(Currency)
	//Output:		none
	Currency operator+(const Currency& rightCurrency);
	
	//Method:		operator-
	//Description:		returns this minus rightCurrency
	//Preconditions:	none
	//Postconditions:	rightCurrency's dollars subtracted from dollars
	//			rightCurrency's cents subtracted from cents
	//Input:		rightCurrency(Currency)
	//Output:		none
	Currency operator-(const Currency& rightCurrency);
	
	
	//Method:		operator+
	//Description:		returns this plus tmpDollars
	//Preconditions:	none
	//Postconditions:	tmpDollars added to dollars
	//Input:		tmpDollars(int)
	//Output:		none
	Currency operator+(int tmpDollars);
	
	//Method:		operator-
	//Description:		returns this minus tmpDollars
	//Preconditions:	none
	//Postconditions:	tmpDollars subtracted from dollars
	//Input:		tmpDollars(int)
	//Output:		none
	Currency operator-(int tmpDollars);
	
	//Method:		operator*
	//Description:		returns this times amount
	//Preconditions:	none
	//Postconditions:	dollars set to dollars times amount
	//			dollars set to dollars times amount
	//Input:		amount(int)
	//Output:		none
	Currency operator*(int amount);
	
	//Method:		operator/
	//Description:		returns this divided by amount
	//Preconditions:	none
	//Postconditions:	dollars set to dollars divided by amount
	//			dollars set to dollars divided by amount
	//Input:		amount(int)
	//Output:		none
	Currency operator/(int amount);
	
	
	//Method:		operator+
	//Description:		returns this plus value
	//Preconditions:	none
	//Postconditions:	value's int added to dollars
	//			value's decimal added to cents
	//Input:		value(double)
	//Output:		none
	Currency operator+(double value);
	
	//Method:		operator-
	//Description:		returns this minus value
	//Preconditions:	none
	//Postconditions:	value's int subtracted from dollars
	//			value's decimal subtracted from cents
	//Input:		value(double)
	//Output:		none
	Currency operator-(double value);
	
	//Method:		operator*
	//Description:		returns this times amount
	//Preconditions:	none
	//Postconditions:	dollars set to dollars times amount
	//			dollars set to dollars times amount
	//Input:		amount(double)
	//Output:		none
	Currency operator*(double amount);
	
	//Method:		operator/
	//Description:		returns this divided by amount
	//Preconditions:	none
	//Postconditions:	dollars set to dollars divided by amount
	//			dollars set to dollars divided by amount
	//Input:		amount(double)
	//Output:		none
	Currency operator/(double amount);
	
	
	//Method:		operator int
	//Description:		returns this casted to an int
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		(int) dollars
	operator int() const;
	
	//Method:		operator float
	//Description:		returns this casted to a float
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		(float) dollars.cents
	operator float() const;
    private:
	static outputRound roundFormat;//the rounding format for outputting
	static outputDollarSign dollarFormat;//the dollar sign format for outputting
	long dollars;//the dollars
	short cents;//the cents
};

//Method:               operator<<
//Description:          outputs the currency in the format "$dollars.cents" to the
//                      given ostream
//Preconditions:        none
//Postconditions:       currency output to the given ostream
//Input:                out(ostream) stream to output to
//			 currency(Currency)
//Output:               out(ostream)
ostream& operator<<(ostream& out, const Currency& currency);



#endif


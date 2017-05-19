//Author:      Kyle Ross
//Assignment:  1
//Professor:   Brekke
//Due:         Jan 28, 2016
//Filename:    currency.cpp
//Description: contains implementation of Currency class


#include "currency.h"
#include <iostream>


using namespace std;

outputRound Currency::roundFormat = ShowCents;

outputDollarSign Currency::dollarFormat = ShowDollarSign;

void Currency::setFormat(outputRound format) {
    roundFormat = format;
}

void Currency::setFormat(outputDollarSign format) {
    dollarFormat = format;
}

outputRound Currency::getRoundFormat() {
    return roundFormat;
}

outputDollarSign Currency::getDollarFormat() {
    return dollarFormat;
}

Currency::Currency() {
    dollars = 0;
    cents = 0;
}

Currency::Currency(int tmpDollars) {
    dollars = tmpDollars;
    cents = 0;
}

Currency::Currency(double value) {
    dollars = static_cast<long>(value);
    cents = static_cast<short>(((value - dollars) * 100) + .6);
}

Currency::Currency(long tmpDollars, short tmpCents) {
    dollars = tmpDollars;
    cents = tmpCents;
}

long Currency::getDollars() const {
    return dollars;
}

short Currency::getCents() const {
    return cents;
}

Currency& Currency::operator=(const Currency& rightCurrency) {
    dollars = rightCurrency.getDollars();
    cents = rightCurrency.getCents();
    
    return *this;
}

Currency& Currency::operator=(int tmpDollars) {
    dollars = tmpDollars;
    cents = 0;
    
    return *this;
}

Currency& Currency::operator=(double value) {
    dollars = static_cast<long>(value);
    cents = static_cast<short>(((value - dollars) * 100) + .6);
    
    return *this;
}

bool Currency::operator==(const Currency& rightCurrency) const {
    if ((getDollars() == rightCurrency.getDollars()) && 
      (getCents() == rightCurrency.getCents()))
	return true;
    else
	return false;
}

bool Currency::operator!=(const Currency& rightCurrency) const {
    return not (*this == rightCurrency);
}

bool Currency::operator<(const Currency& rightCurrency) const {
    if (getDollars() < rightCurrency.getDollars())
	return true;
    else if (getDollars() == rightCurrency.getDollars())
	if (getCents() < rightCurrency.getCents())
	    return true;
	else
	    return false;
    else
	return false;
}

bool Currency::operator<=(const Currency& rightCurrency) const {
    return (*this < rightCurrency) || (*this == rightCurrency);
}

bool Currency::operator>(const Currency& rightCurrency) const {
    return not ((*this < rightCurrency) || (*this == rightCurrency));
}

bool Currency::operator>=(const Currency& rightCurrency) const {
    return (*this > rightCurrency) || (*this == rightCurrency);
}

bool Currency::operator==(int tmpDollars) const {
    if ((getCents() == 0) && (getDollars() == tmpDollars))
	return true;
    else
	return false;
}

bool Currency::operator!=(int tmpDollars) const {
    return not (*this == tmpDollars);
}

bool Currency::operator<(int tmpDollars) const {
    if (getDollars() < tmpDollars)
	return true;
    else
	return false;
}

bool Currency::operator<=(int tmpDollars) const {
    return ((*this < tmpDollars) || (*this == tmpDollars));
}

bool Currency::operator>(int tmpDollars) const {
    return not (*this <= tmpDollars);
}

bool Currency::operator>=(int tmpDollars) const {
    return not (*this < tmpDollars);
}

bool Currency::operator==(double value) const {
    Currency tmpCurrency(value);
    return (*this == tmpCurrency);
}

bool Currency::operator!=(double value) const {
    Currency tmpCurrency(value);
    return (*this != tmpCurrency);
}

bool Currency::operator<(double value) const {
    Currency tmpCurrency(value);
    return (*this < tmpCurrency);
}

bool Currency::operator<=(double value) const {
    Currency tmpCurrency(value);
    return (*this <= tmpCurrency);
}

bool Currency::operator>(double value) const {
    Currency tmpCurrency(value);
    return (*this > tmpCurrency);
}

bool Currency::operator>=(double value) const {
    Currency tmpCurrency(value);
    return (*this >= tmpCurrency);
}

Currency Currency::operator+(const Currency& rightCurrency) {
    long tmpDollars = getDollars() + rightCurrency.getDollars();
    short tmpCents = getCents() + rightCurrency.getCents();
    if (tmpCents >= 100) {
	tmpDollars = tmpDollars + 1;
	tmpCents = tmpCents - 100;
    }
    
    return Currency(tmpDollars, tmpCents);
}

Currency Currency::operator-(const Currency& rightCurrency) {
    long tmpDollars = getDollars() - rightCurrency.getDollars();
    short tmpCents = getCents() - rightCurrency.getCents();
    while (tmpCents < 0) {
	tmpDollars = tmpDollars - 1;
	tmpCents = tmpCents + 100;
    }
    
    return Currency(tmpDollars, tmpCents);
}

Currency Currency::operator+(int tmpDollars) {
    tmpDollars = getDollars() + tmpDollars;
    
    return Currency(tmpDollars, getCents());
}

Currency Currency::operator-(int tmpDollars) {
    tmpDollars = getDollars() - tmpDollars;
    
    return Currency(tmpDollars, getCents());
}

Currency Currency::operator*(int amount) {
    long tmpDollars = getDollars() * amount;
    short tmpCents = getCents() * amount;
    while (tmpCents >= 100) {
	tmpDollars = tmpDollars + 1;
	tmpCents = tmpCents - 100;
    }
    
    return Currency(tmpDollars, tmpCents);
}

Currency Currency::operator/(int amount) {
    float tmpValue = static_cast<float>(*this);
    tmpValue = tmpValue / amount;
    
    return Currency(tmpValue);
}

Currency Currency::operator+(double value) {
    Currency tmpCurrency(value);
    tmpCurrency = *this + tmpCurrency;
    
    return tmpCurrency;
}

Currency Currency::operator-(double value) {
    Currency tmpCurrency(value);
    tmpCurrency = *this - tmpCurrency;
    
    return tmpCurrency;
}

Currency Currency::operator*(double amount) {
    float tmpValue = static_cast<float>(*this);
    tmpValue = tmpValue * amount;
    
    return Currency(tmpValue);
}

Currency Currency::operator/(double amount) {
    float tmpValue = static_cast<float>(*this);
    tmpValue = tmpValue / amount;
    
    return Currency(tmpValue);
}

Currency::operator int() const {
    return getDollars();
}

Currency::operator float() const {
    return getDollars() + (static_cast<float>(getCents()) / 100);
}

ostream& operator<<(ostream& out, const Currency& currency) {
    if (Currency::getDollarFormat() == ShowDollarSign)
	out << "$";
    if (Currency::getRoundFormat() == ShowCents)
	out << currency.getDollars() << "." << currency.getCents();
    else if (Currency::getRoundFormat() == Truncate)
	out << currency.getDollars();
    else {
	if (currency.getCents() >= 50) 
	    out << currency.getDollars() + 1;
	else
	    out << currency.getDollars();
    }
    
    return out;
}


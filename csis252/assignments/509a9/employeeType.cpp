//File:		employeeType.h
//Author:	Kyle Ross
//Assignment:	8
//Professor:	Brekke
//Due:		11/7/2014
//Description:	contains implementation for employeeType class


#include "employeeType.h"
#include "constants.h"


employeeType::employeeType() {
    dateType tmpBirthday;
    
    setWage(0.0);
    setHours(0.0);
    setName("");
    setBirthday(tmpBirthday);
}//end employeeType method--default constructor

employeeType::employeeType(const personType& person) {
    setName(person.getName());
    setBirthday(person.getBirthday());
}//end employeeType method--constructor

employeeType::employeeType(const personType& person, double tmpHours, double tmpWage) {
    setHours(tmpHours);
    setWage(tmpWage);
    setName(person.getName());
    setBirthday(person.getBirthday());
}//end employeeType method--constructor

double employeeType::getHours() const {
    return hours;
}//end getHours method

void employeeType::setHours(double tmpHours) {
    hours = tmpHours;
}//end setHours method

double employeeType::getWage() const {
    return wage;
}//end getWage method

void employeeType::setWage(double tmpWage) {
    wage = tmpWage;
}//end setWage method

double employeeType::getGrossPay() const {
    double gross;//gross pay
    
    if (getHours() > 40)//overtime
	gross = (40 + (getHours() - 40)*1.5)*getWage();
    else
	gross = getHours()*getWage();
    
    return gross;
}//end getGrossPay method

double employeeType::getFedTax() const {
    return getGrossPay() * FED_TAX_RATE;
}//end getFedTax method

double employeeType::getSSTax() const {
    return getGrossPay() * SOC_SEC_RATE;
}//end getSSTax method

double employeeType::getNetPay() const {
    double net;
    
    net = getGrossPay();
    net -= getFedTax();
    net -= getSSTax();
    
    return net;
}//end getNetPay method

bool employeeType::operator==(const employeeType& otherEmployee) const {
    return getWage() == otherEmployee.getWage();
}//end operator== method

bool employeeType::operator<(const employeeType& otherEmployee) const {
    return getWage() < otherEmployee.getWage();
}//end operator< method

bool employeeType::operator!=(const employeeType& otherEmployee) const {
    return getWage() != otherEmployee.getWage();
}//end operator!= method

bool employeeType::operator<=(const employeeType& otherEmployee) const {
    return getWage() <= otherEmployee.getWage();
}//end operator<= method

bool employeeType::operator>(const employeeType& otherEmployee) const {
    return getWage() > otherEmployee.getWage();
}//end operator> method

bool employeeType::operator>=(const employeeType& otherEmployee) const {
    return getWage() >= otherEmployee.getWage();
}//end operator>= method
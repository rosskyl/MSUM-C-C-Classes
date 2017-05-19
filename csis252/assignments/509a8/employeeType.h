//File:		employeeType.h
//Author:	Kyle Ross
//Assignment:	8
//Professor:	Brekke
//Due:		11/7/2014
//Description:	contains specifications for employeeType class


#ifndef __employeeType_h__
#define __employeeType_h__

#include "personType.h"

class employeeType: public personType {
    public:
	//Method:		employeeType	
	//Description:		default constructor
	//Preconditions:	none
	//Postconditions:	name, birthday, wage, and hours initialized
	//Input:		none
	//Output:		none
	employeeType();
	
	//Method:		employeeType
	//Description:		constructor
	//Preconditions:	none
	//Postconditions:	name, birthday, wage, and hours initialized
	//Input:		person(personType) person to get name 
	//				and birthday from
	//Output:		none
	employeeType(const personType& person);
	
	//Method:		employeeType
	//Description:		constructor
	//Preconditions:	none
	//Postconditions:	name, birthday, wage, and hours initialized
	//Input:		person(personType) person to get name 
	//				and birthday from
	//			tmpHours(double) hours
	//			tmpWage(double) wage
	//Output:		none
	employeeType(const personType& person, double tmpHours, double tmpWage);
	
	//Method:		getHours
	//Description:		gets the hours
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		hours(double) hours for employee
	double getHours() const;
	
	//Method:		setHours
	//Description:		sets the hours
	//Preconditions:	none
	//Postconditions:	hours changed to tmpHours
	//Input:		tmpHours(double) hours
	//Output:		none
	void setHours(double tmpHours);
	
	//Method:		getWage
	//Description:		gets the wage
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		wage(double) wage for employee
	double getWage() const;
	
	//Method:		setWage
	//Description:		sets the wage
	//Preconditions:	none
	//Postconditions:	wage changed to tmpWage
	//Input:		tmpWage(double) wage
	//Output:		none
	void setWage(double tmpWage);
	
	//Method:		getGrossPay
	//Description:		gets the gross pay
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		grossPay(double) gross pay for employee
	double getGrossPay() const;
	
	//Method:		getFedTax
	//Description:		gets the federal tax
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		fedTax(double) federal tax for employee
	double getFedTax() const;
	
	//Method:		getSSTax
	//Description:		gets the social security tax
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		SSTax(double) social security tax for employee
	double getSSTax() const;
	
	//Method:		getNetPay
	//Description:		gets the net pay
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		netPay(double) net pay for employee
	double getNetPay() const;
	
	//Method:		operator==
	//Description:		returns whether the employees' gross pay are
	//				equal
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherEmployee(employeeType)
	//Output:		bool
	bool operator==(const employeeType& otherEmployee) const;
	
	//Method:		operator<
	//Description:		returns whether other employee's gross pay
	//			is less than the first employee's
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherEmployee(employeeType)
	//Output:		bool
	bool operator<(const employeeType& otherEmployee) const;
	
	//Method:		operator!=
	//Description:		returns whether the employees' gross pay
	//			are not equal
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherEmployee(employeeType)
	//Output:		bool
	bool operator!=(const employeeType& otherEmployee) const;
	
	//Method:		operator<=
	//Description:		returns whether other employee's gross pay
	//			is less than or equal the first employee's
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherEmployee(employeeType)
	//Output:		bool
	bool operator<=(const employeeType& otherEmployee) const;
	
	//Method:		operator>
	//Description:		returns whether other employee's gross pay
	//			is greater than the first employee's
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherEmployee(employeeType)
	//Output:		bool
	bool operator>(const employeeType& otherEmployee) const;
	
	//Method:		operator>=
	//Description:		returns whether other employee's gross pay
	//			is greater than or equal the first employee's
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherEmployee(employeeType)
	//Output:		bool
 	bool operator>=(const employeeType& otherEmployee) const;
	
    private:
	double hours;//hours of employee
	double wage;//hours of employee
    
};//end employeeType class

#endif
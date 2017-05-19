//File:		main.cpp
//Author:	Kyle Ross
//Assignment:	7
//Professor:	Brekke
//Due:		10/31/2014
//Description:	


#include "dateType.h"
//#include <iostream>

using namespace std;


int main() {
    int year;
    int month;
    int day;
    dateType date1;//test default constructor
    dateType date2(1,2,3);//test other constructor
    dateType date3;
    
    cout << "Enter a date in yyyy-mm-dd format:" << endl;
    cin >> date3;//test operator>>
    
    cout << date1 << endl << date2 << endl << date3 << endl;//test operator<<
    
    date1.setDate(7,8,10);
    
    //test get methods
    cout << date2.getYear() << "/" << date2.getMonth() << "/" 
	<< date2.getDay() << endl;
    date1.getDate(year, month, day);
    cout << year << ":" << month << ":" << day << endl;
    
    if (date2==date3)//test operator==
	cout << date2 << " and " << date3 << " are equal" << endl;
    else
	cout << date2 << " and " << date3 << " are not equal" << endl;
    
    if (date1!=date3)//test operator!=
	cout << date1 << " and " << date3 << " are not equal" << endl;
    else
	cout << date1 << " and " << date3 << " are equal" << endl;
    
    if (date2 < date3)//test operator<
	cout << date2 << " is less than " << date3 << endl;
    else if (date2 > date3)//test operator>
	cout << date2 << " is greater than " << date3 << endl;
    
    if (date2 <= date3)//test operator<=
	cout << date2 << " is less than or equal to " << date3 << endl;
    else if (date2 >= date3)//test operator>=
	cout << date2 << " is greater than or equal " << date3 << endl;
    
    
}//end main
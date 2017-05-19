//File:		main.cpp
//Author:	Kyle Ross
//Assignment:	8
//Professor:	Brekke
//Due:		11/7/2014
//Description:	contains main


#include <iostream>
#include <iomanip>
using namespace std;
#include "employeeType.h"

int main()
{
   cout << fixed << showpoint << setprecision(2);
   dateType date(1991,6,27);
   personType person("Earl E. Riser",date);
   employeeType emp(person,50,10);
   cout << emp.getName() << endl;
   cout << emp.getBirthday() << endl;
   cout << emp.getHours() << endl;
   cout << emp.getWage() << endl;
   cout << emp.getGrossPay() << endl;
   cout << emp.getFedTax() << endl;
   cout << emp.getSSTax() << endl;
   cout << emp.getNetPay() << endl << endl;

   person.setName("Alison Wonderland");
   cout << emp.getName() << endl;
   emp.setName("Alison Wonderland");
   cout << emp.getName() << endl << endl;;
   

   employeeType emp2;
   date.setDate(1989,2,20);
   emp2.setName("Anne Chovie");
   emp2.setBirthday(date);
   emp2.setHours(40);
   emp2.setWage(15.75);
   cout << emp2.getName() << endl;
   cout << emp2.getBirthday() << endl;
   cout << emp2.getHours() << endl;
   cout << emp2.getWage() << endl;
   cout << emp2.getGrossPay() << endl;
   cout << emp2.getFedTax() << endl;
   cout << emp2.getSSTax() << endl;
   cout << emp2.getNetPay() << endl;

   personType person2;
   employeeType emp3(person2);

   if (emp==emp2 || emp!=emp2 || emp<emp2 || 
       emp<=emp2 || emp>emp2 || emp>=emp2 )
      cout << "one of these better be true\n";
   else
      cout << "your program has problems\n";


   return 0;
}

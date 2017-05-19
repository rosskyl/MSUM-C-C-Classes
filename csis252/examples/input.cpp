#include <iostream>
#include <string>
using namespace std;

int main()
{
   int i;
   char c;
   double d;
   cout << "enter an int: ";
   cin >> i;
//    cin.ignore(80,'\n');  // get rid of the '\n'
   cout << "enter a char: ";
   cin >> c;
//    cin.ignore(80,'\n');  // get rid of the '\n'
   cout << "enter a double: ";
   cin >> d;
   cout << endl;
   cout << "i = " << i << endl;
   cout << "c = " << c << endl;
   cout << "d = " << d << endl;
   cin.ignore(80,'\n');  // get rid of the '\n'
   string name;
   cout << "enter your name: ";
//   cin >> name;
   getline(cin,name); // gets rid of the '\n'
   cout << "your name is " << name << endl;
   return 0;
}
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s;
   ifstream input;
   input.open("data");
   getline(input,s);
   while (!input.eof())
   {
      cout << s << endl;
      getline(input,s);
   }
   input.close();
   return 0;
}
 

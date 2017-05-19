#include <fstream>
#include <iostream>
using namespace std;


int main()
{
   ifstream infile;
   ofstream outfile;
   int num1, num2, sum;
   infile.open("input");
   infile >> num1 >> num2;
   infile.close();
   sum = num1+num2;
   outfile.open("output");
   outfile << "the sum is " << sum << endl;
   outfile.close();
   cout << "input read from the file 'input'\n";
   cout << "output written to the file 'output'\n";
   return 0;
}
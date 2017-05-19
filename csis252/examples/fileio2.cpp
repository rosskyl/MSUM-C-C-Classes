#include <fstream>
#include <iostream>
using namespace std;


int main()
{
   ifstream infile;
   ofstream outfile;
   int num;
   int sum=0;
   infile.open("input");
   infile >> num;
   while (!infile.eof())
   {
      sum += num;
      infile >> num;
   }
   infile.close();
   outfile.open("output");
   outfile << "the sum is " << sum << endl;
   outfile.close();
   cout << "input read from the file 'input'\n";
   cout << "output written to the file 'output'\n";
   return 0;
}
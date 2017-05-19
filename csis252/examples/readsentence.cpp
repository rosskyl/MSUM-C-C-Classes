#include <iostream>
#include <fstream>
#include <cstdlib>//needed for exit()
using namespace std;
#include <string>

void getsentence(istream& in,string& s,char delimeter)
{
   s = "";
   char ch;
   while (in.peek()=='\n')
   {
//       cout << "skipping \\n" << endl;
      in.get(ch);
   }
   in.get(ch);
   while (ch!=delimeter && !in.eof())
   {
      s += ch;
      in.get(ch);
   }
   s += ch;
}

int main(int argc, char* argv[])
{
   ifstream infile;
   if (argc != 2)
   {
      cout << "usage: " << argv[0] << " inputfile\n";
      exit(1);
   }
   infile.open(argv[1]);
   if (infile.fail())
   {
      cout << "error opening file " << argv[1] << ". Doesn't exist?\n";
      exit(1);
   }
   string s="";
   getsentence(infile,s,'.');
   while (!infile.eof())
   {
      cout << "SENTENCE\n" << s << endl;
      getsentence(infile,s,'.');
   }
   infile.close();
   return 0;
}
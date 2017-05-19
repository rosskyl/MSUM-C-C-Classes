#include <iostream>
using namespace std;

const double maxscore=100;

int main()
{
   // variables
   int score;
   double pct;
   
   cout << "enter a score: ";
   cin >> score;
   pct = score/maxscore;
   cout << "your percentage is " << pct << endl;
   return 0;
}

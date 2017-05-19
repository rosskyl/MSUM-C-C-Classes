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
   if (0.97 <= pct && pct <= 1.00)
      cout << "You got an A+ !!!\n";
   else
      cout << "You did not get an A+\n";
   
   return 0;
}

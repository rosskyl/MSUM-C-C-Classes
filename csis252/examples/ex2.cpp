#include <iostream>
using namespace std;

int main() {
  float score;
  int maxScore;
  float percScore;
  
  cout << "This program takes the test score and max score and prints the percentage" << endl;
  cout << "enter your score: ";
  cin >> score;
  cout << "enter the max score: ";
  cin >> maxScore;
  percScore = score / maxScore;
  cout << score << " out of " << maxScore << " is " << percScore << endl;
  
}
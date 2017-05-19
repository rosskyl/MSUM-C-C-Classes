//Author:      Kyle Ross
//Assignment:  1
//Professor:   Brekke
//Due:         Sep 5, 2014
//Description: User inputs 2 numbers and performs addition, subtraction, multiplication, and
//             remainder, integer, and floating division


#include <iostream>

using namespace std;

int main() {
    int num1,//the first number
        num2;//the second number
    
    cout << "This program will take 2 integers and perform 6 calculations on them" << endl;
    cout << endl << "Enter the first integer: ";
    cin >> num1;
    cout << endl << "Enter the second integer: ";
    cin >> num2;
    
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;//addition
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;//subtraction
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;//multiplication
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;//remainder division
    cout << "This will be integer division" << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;//integer division
    cout << "This will be floating division" << endl;
    cout << num1 << " / " << num2 << " = " << num1 / double(num2) << endl;//floating division
}
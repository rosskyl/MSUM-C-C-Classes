//Author:      Kyle Ross
//Assignment:  1
//Professor:   Brekke
//Due:         Sep 5, 2014
//Description: User inputs name, height in centimeters, and weight in kilograms and outputs
//             name, height in feet and inches, and weight in pounds


#include <iostream>

using namespace std;

int main() {
    string name;
    int height,//in centimeters
        weight,//in kilograms
        heightFt,//height in feet
	heightIn;//height in inches
    const float cmToIn = .39;//for converting cm to inches
    const float kgToLb = 2.2046226;//for converting kg to lbs
    
    cout << "This program takes a persons name, height(cm), and weight(kg) and prints the name, height(ft and in), and weight(lbs)" << endl;
    cout << endl << "Enter the first name: ";
    cin >> name;
    cout << "Enter the height in centimeters: ";
    cin >> height;
    cout << "Enter the weight in kilograms: ";
    cin >> weight;
    
    heightIn = height * cmToIn;
    heightFt = heightIn / 12;
    heightIn = heightIn % 12;
    
    cout << endl << "First name: " << name << endl;
    cout << "Height: " << heightFt << "ft " << heightIn << " in" << endl;
    cout << "Weight: " << int(weight * kgToLb) << " lbs" << endl;
    
}
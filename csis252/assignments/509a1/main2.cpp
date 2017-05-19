//Author:      Kyle Ross
//Assignment:  1
//Professor:   Brekke
//Due:         Sep 5, 2014
//Description: User inputs the radius of a circle and calculates the 
//             diameter, circumference, and the area of a circle


#include <iostream>

using namespace std;

int main() {
    const double pi = 3.14;
    double radius;//radius of the circle
    
    cout << "This program will take the radius of a circle and output the diameter, circumference, and area" << endl;
    cout << endl << "Enter the radius of the circle: ";
    cin >> radius;
    
    cout << endl << "The diameter of the circle is " << radius * 2 << endl;
    cout << "The circumference of the circle is " << radius * 2 * pi << endl;
    cout << "The area of the circle is " << radius * radius * pi << endl;
    
}
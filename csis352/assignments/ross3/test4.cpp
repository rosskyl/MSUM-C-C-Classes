
//Testing the copy constructor and operator=


#include <iostream>
#include "array.h"
using namespace std;
using namespace ArrayNameSpace;


bool isError = false;

void testCopyConstructor() {
    cout << "Testing copy constructor" << endl;
    Array<int> array1;
    Array<int> array2(array1);
    if (array1 != array2) {
	cout << "Line " << __LINE__ << " Should be equal 1" << endl;
	isError = true;
    }
    
    Array<int> array3(10);
    Array<int> array4(array3);
    if (array3 != array4) {
	cout << "Line " << __LINE__ << " Should be equal 2" << endl;
	isError = true;
    }
    
    Array<int> array5(3,5);
    Array<int> array6(array5);
    if (array5 != array6) {
	cout << "Line " << __LINE__ << " Should be equal 3" << endl;
	isError = true;
    }
    
    Array<int> array7('a', 'd');
    Array<int> array8(array7);
    if (array7 != array8) {
	cout << "Line " << __LINE__ << " Should be equal 4" << endl;
	isError = true;
    }
}

void testOperator() {
    Array<int> array;
    
    cout << "Testing operator =" << endl;
    Array<int> array1;
    array = array1;
    if (array1 != array) {
	cout << "Line " << __LINE__ << " Should be equal 1" << endl;
	isError = true;
    }
    
    Array<int> array2(10);
    array = array2;
    if (array2 != array) {
	cout << "Line " << __LINE__ << " Should be equal 2" << endl;
	isError = true;
    }
    
    Array<int> array3(3,5);
    array = array3;
    if (array3 != array) {
	cout << "Line " << __LINE__ << " Should be equal 3" << endl;
	isError = true;
    }
    
    Array<int> array4('a', 'd');
    array = array4;
    if (array4 != array) {
	cout << "Line " << __LINE__ << " Should be equal 4" << endl;
	isError = true;
    }
}

int main() {
    testCopyConstructor();
    testOperator();
    
    if (isError)
	cout << "\n\nTests failed" << endl;
    else
	cout << "\n\nTests passed" << endl;
}
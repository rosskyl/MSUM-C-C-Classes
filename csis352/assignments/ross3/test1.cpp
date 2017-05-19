

//Testing for the constructors, size
//Size is tested while getting the size




#include <iostream>
#include "array.h"
using namespace std;
using namespace ArrayNameSpace;

bool isError = false;

void testDefaultConstructor() {
    cout << "Testing default constructor" << endl;
    //Testing default constructor
    Array<int> array;
    if (array.Size() != 0) {
	cout << "Should have size of 0. size = " << array.Size() << endl;
	isError = true;
    }
}

void testDefaultStart(int size) {
    Array<int> array(size);
    if (array.Size() != size) {
	cout << "Should have size of " << size << ". size = " << array.Size() << endl;
	isError = true;
    }
}

void testDifferentStart(int start, int end) {
    Array<int> array(start, end);
    if (array.Size() != end - start+1) {
	cout << "Should have size " << (end - start+1) << " size = " << array.Size() << endl;
	isError = true;
    }
}

void testChar(int start, int end) {
    string letters = "abcdefghijklmnopqrstuvwxyz";
    Array<int> array(letters[start], letters[end]);
    if (array.Size() != end - start+1) {
	cout << "Should have size " << (end - start+1) << " size = " << array.Size()
	  << " start = " << letters[start] << " end = " << letters[end] << endl;
	isError = true;
    }

}

int main() {
    testDefaultConstructor();
    
    cout << "Testing constructor with one parameter" << endl;
    
    //Testing contstructor with one parameter
    for (int i = 0; i < 10; i += 1) {
	testDefaultStart(i);
    }
    
    cout << "Testing different start" << endl;
    cout << "----positive start" << endl;
    //Testing constructor with 2 parameters
    for (int i = 0; i < 10; i += 1) {
	for (int j = 0; j <= i; j += 1) {
	    testDifferentStart(j, i);
	}
    }
    
    cout << "----negative start" << endl;
    //Testing constructor with 2 parameters
    for (int i = -10; i < 0; i += 1) {
	for (int j = -10; j <= i; j += 1) {
	    testDifferentStart(j, i);
	}
    }
    
    cout << "Testing constructor with letters" << endl;
    
    //Testing constructor with letters
    for (int i = 0; i < 26; i += 1) {
	for (int j = 0; j <= i; j += 1) {
	    testChar(j, i);
	}
    }
    
    cout << "Testing error checking" << endl;
    cout << "----positive start" << endl;
    
    for (int i = 0; i < 10; i += 1) {
	try {
	    testDifferentStart(i, i-2);
	    cout << "Line " << __LINE__ << " Should have an error" << endl;
	    isError = true;
	} catch (out_of_range e) {
	}
    }
    
    cout << "----positive start" << endl;
    
    for (int i = -10; i < 0; i += 1) {
	try {
	    testDifferentStart(i, i-2);
	    cout << "Line " << __LINE__ << " Should have an error" << endl;
	    isError = true;
	} catch (out_of_range e) {
	}
    }
    
    
    if (isError)
	cout << "\n\nTests failed" << endl;
    else
	cout << "\n\nTests passed" << endl;
}
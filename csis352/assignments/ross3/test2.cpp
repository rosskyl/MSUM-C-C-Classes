
//Testing the operator[]


#include <iostream>
#include "array.h"
using namespace std;
using namespace ArrayNameSpace;

const int size = 20;
bool isError = false;

//Testing const operator[]
void constDefaultStart(const Array<int> &array) {
    for (int i = 0; i < size; i += 1)
	if (array[i] != i) {
	    cout << "Line " << __LINE__ << " Should be " << i << " is " << array[i] << endl;
	    isError = true;
	}
}

void constDifferentStart(const Array<int> &array, int start) {
    for (int i = start; i < size - start; i += 1)
	if (array[i] != i) {
	    cout << "Line " << __LINE__ << " Should be " << i << " is " << array[i] << endl;
	    isError = true;
	}
}

void constCharArray(const Array<int> &array, int start, int end) {
    string letters = "abcdefghijklmnopqrstuvwxyz";
    for (int i = start; i <= end; i += 1)
	if (array[letters[i]] != i) {
	    cout << "Line " << __LINE__ << " Should be " << i << " is " << array[letters[i]] << endl;
	    isError = true;
	}
}

void testDefaultStart() {
    cout << "Testing default start" << endl;
    Array<int> array(size);
    
    cout << "----default values" << endl;
    
    //Testing operator[]
    for (int i = 0; i < size; i += 1)
	if (array[i] != 0) {
	    cout << "Line " << __LINE__ << " Should be 0, is " << array[i] << endl;
	    isError = true;
	}
	
    cout << "----assignment" << endl;
    
    //Testing operator[] for setting
	for (int i = 0; i < size; i += 1)
	    array[i] = i;
	for (int i = 0; i < size; i += 1)
	    if (array[i] != i) {
		cout << "Line " << __LINE__ << " Should be " << i << " is " << array[i] << endl;
		isError = true;
	    }
	
    cout << "----const" << endl;
	
    //Testing const operator[]
    constDefaultStart(array);
}

void testDifferentStart() {
    cout << "Testing different start" << endl;
    
    cout << "----negative start" << endl;
    
    //Testing oeprator[] for array with different start
    int start = -2;
    int end = size - start;
    Array<int> array2(start, end);
    
    cout << "--------default values" << endl;
    
    //testing basic operator []
    for (int j = start; j < end; j += 1)
	if (array2[j] != 0) {
	    cout << "Line " << __LINE__ << " Should be 0, is " << array2[j] << " j = " << j << endl;
	    isError = true;
	}
	
    cout << "--------assignment" << endl;
    
    //Testing operator[] for setting
	for (int j = start; j < end; j += 1) {
	    array2[j] = j;
	}
	for (int j = start; j < end; j += 1)
	    if (array2[j] != j) {
		cout << "Line " << __LINE__ << " Should be " << j << " is " << array2[j] << endl;
		isError = true;
	    } 
	    
    cout << "--------const" << endl;
	
    //Testing const operator[]
    constDifferentStart(array2, start);
    
    cout << "----positive start" << endl;
    
    start = 2;
    end = size - start;
    Array<int> array3(start, end);
    
    cout << "--------default value" << endl;
    
    //testing basic operator []
    for (int j = start; j < end; j += 1)
	if (array3[j] != 0) {
	    cout << "Line " << __LINE__ << " Should be 0, is " << array3[j] << " j = " << j << endl;
	    isError = true;
	}
	
    cout << "--------assignment" << endl;
    
    //Testing operator[] for setting
	for (int j = start; j < end; j += 1) {
	    array3[j] = j;
	}
	for (int j = start; j < end; j += 1)
	    if (array3[j] != j) {
		cout << "Line " << __LINE__ << " Should be " << j << " is " << array3[j] << endl;
		isError = true;
	    } 
	    
    cout << "--------const" << endl;
	
    //Testing const operator[]
    constDifferentStart(array3, start);   
}

void testChar() {
    cout << "Testing char indices" << endl;
    
    cout << "----default values" << endl;
    
    //Testing operator[] for chars
    string letters = "abcdefghijklmnopqrstuvwxyz";
    int start = 0;
    int end = 10;
    Array<int> array4(letters[start], letters[end]);
    //Testing default assignment
    for (int i = 0; i <= end; i += 1) {
	if (array4[letters[i]] != 0) {
	    cout << "Line " << __LINE__ << " Should be 0, is " << array4[letters[i]] << endl;
	    isError = true;
	}
    }  
    
    cout << "----assignment" << endl;
    
    //Testing assignment
    for (int i = 0; i <= end; i += 1) {
	array4[letters[i]] = i;
    }    
    //Testing to ensure assignment worked
    for (int i = 0; i <= end; i += 1) {
	if (array4[letters[i]] != i) {
	    cout << "Line " << __LINE__ << " Should be " << i << " is " << array4[letters[i]] << endl;
	    isError = true;
	}
    }  
    
    cout << "----const" << endl;
    
    //Testing const operator[]
    constCharArray(array4, start, end);
}

int main() {
    testDefaultStart();
    testDifferentStart();
    testChar();
    
    if (isError)
	cout << "\n\nTests failed" << endl;
    else
	cout << "\n\nTests passed" << endl;
}

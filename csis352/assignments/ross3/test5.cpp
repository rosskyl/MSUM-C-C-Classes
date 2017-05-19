
//Testing the Resize method


#include <iostream>
#include "array.h"
using namespace std;
using namespace ArrayNameSpace;

bool isError = false;



void printArray(Array<int> &array) {
    for (int i = 0; i < 5; i += 1)
	cout << "array[" << i << "] = " << array[i] << " ";
    cout << endl;
}

void testDefault() {
    cout << "Testing defualt" << endl;
    Array<int> array;
    array.Resize(5);
    if (array.Size() != 5) {
	cout << " Line " << __LINE__ << " Should have size 5, size = " << array.Size() << endl;
	isError = true;
    }
}

void testLarger() {
    cout << "Testing resizing larger" << endl;
    int size = 5;
    int newSize = 6;
    int start = 5;
    
    cout << "----default start" << endl;
    Array<int> array1(size);
    for (int i = 0; i < size; i += 1)
	array1[i] = i;
    array1.Resize(newSize);
    if (array1.Size() != newSize)
	cout << " Line " << __LINE__ << " Should have size " << newSize << ", size = " << array1.Size() << endl;
    for (int i = 0; i < size; i += 1)
	if (array1[i] != i) {
	    cout << " Line " << __LINE__ << " Should be " << i << " is " << array1[i] << endl;
	    isError = true;
	}
    array1[newSize-1];
    
    cout << "----start at " << start << endl;
    Array<int> array2(start, start+size);
    for (int i = start; i < start+size; i += 1)
	array2[i] = i;
    array2.Resize(newSize);
    if (array2.Size() != newSize) {
	cout << " Line " << __LINE__ << " Should have size " << newSize << ", size = " << array2.Size() << endl;
	isError = true;
    }
    for (int i = start; i < start+size; i += 1)
	if (array2[i] != i) {
	    cout << " Line " << __LINE__ << " Should be " << i << " is " << array2[i] << endl;
	    isError = true;
	}
	array2[start+newSize-1];
    
    cout << "----chars" << endl;
    string letters = "abcdefghijklmnopqrstuvwxyz";
    Array<int> array3(letters[start], letters[start+size]);
    for (int i = start; i < start+size; i += 1)
	array3[letters[i]] = i;
    array3.Resize(newSize);
    if (array3.Size() != newSize) {
	cout << " Line " << __LINE__ << " Should have size " << newSize << ", size = " << array3.Size() << endl;
	isError = true;
    }
    for (int i = start; i < start+size; i += 1)
	if (array3[letters[i]] != i) {
	    cout << " Line " << __LINE__ << " Should be " << i << " is " << array3[letters[i]] << endl;
	    isError = true;
	}
    array3[letters[start+newSize-1]];
}

void testSmaller() {
    cout << "Testing resizing smaller" << endl;
    int size = 5;
    int newSize = 4;
    int start = 5;
    
    cout << "----default start" << endl;
    Array<int> array1(size);
    for (int i = 0; i < size; i += 1)
	array1[i] = i;
    array1.Resize(newSize);
    if (array1.Size() != newSize) {
	cout << " Line " << __LINE__ << " Should have size " << newSize << ", size = " << array1.Size() << endl;
	isError = true;
    }
    for (int i = 0; i < newSize; i += 1)
	if (array1[i] != i) {
	    cout << " Line " << __LINE__ << " Should be " << i << " is " << array1[i] << endl;
	    isError = true;
	}
    try {
	array1[size-1];
	cout << "Should not see this" << endl;
	isError = true;
    } catch (out_of_range e) {
	
    }
    
    cout << "----start at " << start << endl;
    Array<int> array2(start, start+size);
    for (int i = start; i < start+size; i += 1)
	array2[i] = i;
    array2.Resize(newSize);
    if (array2.Size() != newSize) {
	cout << " Line " << __LINE__ << " Should have size " << newSize << ", size = " << array2.Size() << endl;
	isError = true;
    }
    for (int i = start; i < start+newSize; i += 1)
	if (array2[i] != i) {
	    cout << " Line " << __LINE__ << " Should be " << i << " is " << array2[i] << endl;
	    isError = true;
	}
    try {
	array2[start+size-1];
	cout << " Line " << __LINE__ <<" Should not see this" << endl;
	isError = true;
    } catch (out_of_range e) {
	
    }
    
    cout << "----chars" << endl;
    string letters = "abcdefghijklmnopqrstuvwxyz";
    Array<int> array3(letters[start], letters[start+size]);
    for (int i = start; i < start+size; i += 1)
	array3[letters[i]] = i;
    array3.Resize(newSize);
    if (array3.Size() != newSize) {
	cout << " Line " << __LINE__ << " Should have size " << newSize << ", size = " << array3.Size() << endl;
	isError = true;
    }
    for (int i = start; i < start+newSize; i += 1)
	if (array3[letters[i]] != i) {
	    cout << " Line " << __LINE__ << " Should be " << i << " is " << array3[letters[i]] << endl;
	    isError = true;
	}
    try {
	array3[letters[start+size-1]];
	cout << " Line " << __LINE__ << " Should not see this" << endl;
	isError = true;
    } catch (out_of_range e) {
	
    }
}

int main() {
    testDefault();
    testLarger();
    testSmaller();
    
    if (isError)
	cout << "\n\nTests failed" << endl;
    else
	cout << "\n\nTests passed" << endl;
}
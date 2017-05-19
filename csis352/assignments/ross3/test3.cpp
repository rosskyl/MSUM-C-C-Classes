
//Testing the comparison operators


#include <iostream>
#include "array.h"
using namespace std;
using namespace ArrayNameSpace;

bool isError = false;
const int size = 10;

void printArray(Array<int> &array) {
    for (int i = 0; i < size; i += 1)
	cout << "array[" << i << "] = " << array[i] << " ";
    cout << endl;
}

void testSameSize() {
    cout << "Testing same size" << endl;
    Array<int> array1(size);
    Array<int> array2(size);
    
    for (int i = 0; i < size; i += 1) {
	array1[i] = i;
	array2[i] = i;
    }
    cout << "----all equal" << endl;
    //testing when they are the same
    if ((array1 == array2) != true) {
	cout << "Line " << __LINE__ << " Problem with ==" << endl;
	isError = true;
    }
    
    if ((array1 != array2) != false) {
	cout << "Line " << __LINE__ << " Problem with !=" << endl;
	isError = true;
    }
    
    if ((array1 < array2) != false) {
	cout << "Line " << __LINE__ << " Problem with <" << endl;
	isError = true;
    }
    
    if ((array1 <= array2) != true) {
	cout << "Line " << __LINE__ << " Problem with <=" << endl;
	isError = true;
    }
    
    if ((array1 > array2) != false) {
	cout << "Line " << __LINE__ << " Problem with >" << endl;
	isError = true;
    }
    
    if ((array1 >= array2) != true) {
	cout << "Line " << __LINE__ << " Problem with >=" << endl;
	isError = true;
    }
    
    cout << "----second bigger" << endl;
    //Testing when second one is greater
    for (int i = 0; i < size; i += 1) {
	array2[i] = i + 1;
	
	if ((array1 == array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with ==" << endl;
	    isError = true;
	}
	
	if ((array1 != array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with !=" << endl;
	    isError = true;
	}
	
	if ((array1 < array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with <" << endl;
	    isError = true;
	}
	
	if ((array1 <= array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with <=" << endl;
	    isError = true;
	}
	
	if ((array1 > array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with >" << endl;
	    isError = true;
	}
	
	if ((array1 >= array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with >=" << endl;
	    isError = true;
	}
	
	array2[i] = i;
    }
    
    cout << "----first bigger" << endl;
    //Testing when first one is greater
    for (int i = 0; i < size; i += 1) {
	array1[i] = i + 1;
	
	if ((array1 == array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with ==" << endl;
	    isError = true;
	}
	
	if ((array1 != array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with !=" << endl;
	    isError = true;
	}
	
	if ((array1 < array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with <" << endl;
	    isError = true;
	}
	
	if ((array1 <= array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with <=" << endl;
	    isError = true;
	}
	
	if ((array1 > array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with >" << endl;
	    isError = true;
	}
	
	if ((array1 >= array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with >=" << endl;
	    isError = true;
	}

	array1[i] = i;
    }
}

void testSecondLarger() {
    cout << "Testing second larger" << endl;
    //Testing these when second array has more items
    Array<int> array1(size);
    Array<int> array2(size+1);
    
    for (int i = 0; i < size; i += 1) {
	array1[i] = i;
	array2[i] = i;
    }
    
    cout << "----both same" << endl;
    //testing when they are the same
    if ((array1 == array2) != false) {
	cout << "Line " << __LINE__ << " Problem with ==" << endl;
	isError = true;
    }
    
    if ((array1 != array2) != true) {
	cout << "Line " << __LINE__ << " Problem with !=" << endl;
	isError = true;
    }
    
    if ((array1 < array2) != true) {
	cout << "Line " << __LINE__ << " Problem with <" << endl;
	isError = true;
    }
    
    if ((array1 <= array2) != true) {
	cout << "Line " << __LINE__ << " Problem with <=" << endl;
	isError = true;
    }
    
    if ((array1 > array2) != false) {
	cout << "Line " << __LINE__ << " Problem with >" << endl;
	isError = true;
    }
    
    if ((array1 >= array2) != false) {
	cout << "Line " << __LINE__ << " Problem with >=" << endl;
	isError = true;
    }
    
    cout << "----second bigger" << endl; 
    //Testing when second one is greater
    for (int i = 0; i < size; i += 1) {
	array2[i] = i + 1;
	
	if ((array1 == array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with ==" << endl;
	    isError = true;
	}
	
	if ((array1 != array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with !=" << endl;
	    isError = true;
	}
	
	if ((array1 < array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with <" << endl;
	    isError = true;
	}
	
	if ((array1 <= array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with <=" << endl;
	    isError = true;
	}
	
	if ((array1 > array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with >" << endl;
	    isError = true;
	}
	
	if ((array1 >= array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with >=" << endl;
	    isError = true;
	}

	array2[i] = i;
    }
    
    cout << "----first bigger" << endl;
    //Testing when first one is greater
    for (int i = 0; i < size; i += 1) {
	array1[i] = i + 1;
	
	if ((array1 == array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with ==" << endl;
	    isError = true;
	}
	
	if ((array1 != array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with !=" << endl;
	    isError = true;
	}
	
	if ((array1 < array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with <" << endl;
	    isError = true;
	}
	
	if ((array1 <= array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with <=" << endl;
	    isError = true;
	}
	
	if ((array1 > array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with >" << endl;
	    isError = true;
	}
	
	if ((array1 >= array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with >=" << endl;
	    isError = true;
	}
	
	array1[i] = i;
    }
}

void testFirstLarger() {
    cout << "Testing first larger" << endl;
    //Testing these when second array has more items
    Array<int> array1(size+1);
    Array<int> array2(size);
    
    for (int i = 0; i < size; i += 1) {
	array1[i] = i;
	array2[i] = i;
    }
    
    cout << "----both same" << endl;
    //testing when they are the same
    if ((array1 == array2) != false) {
	cout << "Line " << __LINE__ << " Problem with ==" << endl;
	isError = true;
    }
    
    if ((array1 != array2) != true) {
	cout << "Line " << __LINE__ << " Problem with !=" << endl;
	isError = true;
    }
    
    if ((array1 < array2) != false) {
	cout << "Line " << __LINE__ << " Problem with <" << endl;
	isError = true;
    }
    
    if ((array1 <= array2) != false) {
	cout << "Line " << __LINE__ << " Problem with <=" << endl;
	isError = true;
    }
    
    if ((array1 > array2) != true) {
	cout << "Line " << __LINE__ << " Problem with >" << endl;
	isError = true;
    }
    
    if ((array1 >= array2) != true) {
	cout << "Line " << __LINE__ << " Problem with >=" << endl;
	isError = true;
    }
    
    cout << "----second bigger" << endl;
    //Testing when second one is greater
    for (int i = 0; i < size; i += 1) {
	array2[i] = i + 1;
	
	if ((array1 == array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with ==" << endl;
	    isError = true;
	}
	
	if ((array1 != array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with !=" << endl;
	    isError = true;
	}
	
	if ((array1 < array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with <" << endl;
	    isError = true;
	}
	
	if ((array1 <= array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with <=" << endl;
	    isError = true;
	}
	
	if ((array1 > array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with >" << endl;
	    isError = true;
	}
	
	if ((array1 >= array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with >=" << endl;
	    isError = true;
	}
	
	array2[i] = i;
    }
    
    cout << "----first bigger" << endl;
    //Testing when first one is greater
    for (int i = 0; i < size; i += 1) {
	array1[i] = i + 1;
	
	if ((array1 == array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with ==" << endl;
	    isError = true;
	}
	
	if ((array1 != array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with !=" << endl;
	    isError = true;
	}
	
	if ((array1 < array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with <" << endl;
	    isError = true;
	}
	
	if ((array1 <= array2) != false) {
	    cout << "Line " << __LINE__ << " Problem with <=" << endl;
	    isError = true;
	}
	
	if ((array1 > array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with >" << endl;
	    isError = true;
	}
	
	if ((array1 >= array2) != true) {
	    cout << "Line " << __LINE__ << " Problem with >=" << endl;
	    isError = true;
	}
	
	array1[i] = i;
    }
}

int main() {
    testSameSize();
    testSecondLarger();
    testFirstLarger();
    
    if (isError)
	cout << "\n\nTests failed" << endl;
    else
	cout << "\n\nTests passed" << endl;
}
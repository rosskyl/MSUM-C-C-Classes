//Author:      Kyle Ross
//Assignment:  3
//Professor:   Brekke
//Due:         Mar 1, 2016
//Filename:    array.h
//Description: 


#ifndef _ARRAY_H_
#define _ARRAY_H_


#include <string>
using namespace std;




///TODO thorough testing
///TODO change test 1 and 2 to use functions
///TODO add another test for returning an array

namespace ArrayNameSpace {
    
    class out_of_range {
	public:
	    //Method:		out_of_range
	    //Description:	default constructor
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		m(string) the message
	    //Output:		none
	    out_of_range(const string& m = "") {
		msg = m;
	    }//end out_of_range
	    
	    //Method:		what
	    //Description:	returns the message
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		message
	    const string what() {
		return "out_of_range: " + msg;
	    }//end string what()
	private:
	    string msg;// the message for the error
    };//end class out_of_range
    
    template<class Type>
    class Array {
	public:
	    //Method:		~Array
	    //Description:	deconstructor
	    //Preconditions:	none
	    //Postconditions:	list is deleted and set to null
	    //Input:		none
	    //Output:		none
	    ~Array();
	    
	    //Method:		Array
	    //Description:	default constructor
	    //Preconditions:	none
	    //Postconditions:	size set to 0
	    //Input:		none
	    //Output:		none
	    Array();
	    
	    //Method:		Array
	    //Description:	copy constructor
	    //Preconditions:	none
	    //Postconditions:	everything from newArray is copied to this
	    //Input:		newArray(Array)
	    //Output:		none
	    Array(const Array& newArray);
	    
	    //Method:		Array
	    //Description:	constructor
	    //Preconditions:	none
	    //Postconditions:	size set to tmpSize and list initialized to size
	    //			start is 0
	    //Input:		tmpSize(int)
	    //Output:		none
	    Array(int tmpSize);
	    
	    //Method:		Array
	    //Description:	constructor
	    //Preconditions:	none
	    //Postconditions:	size set to difference between end and tmpStart
	    //			list initialized to size
	    //			start is 0
	    //Input:		tmpStart(int)
	    //			end(int)
	    //Output:		none
	    //Exception:	out_of_range exception if  end < tmpStart
	    Array(int tmpStart, int end) throw (out_of_range) ;
	    
	    //Method:		Array
	    //Description:	constructor
	    //Preconditions:	none
	    //Postconditions:	size set to difference between end and tmpStart
	    //			list initialized to size
	    //Input:		tmpStart(int)
	    //			end(int)
	    //Output:		none
	    //Exception:	out_of_range exception if  end < tmpStart
	    Array(char tmpStart, char end) throw (out_of_range) ;
	    
	    //Method:		operator=
	    //Description:	copy operator
	    //Preconditions:	none
	    //Postconditions:	everything from rightArray copied to this
	    //Input:		rightArray(Array)
	    //Output:		none
	    const Array<Type>& operator=(const Array<Type>& rightArray);
	    
	    //Method:		operator[]
	    //Description:	retrieves and sets the item at index
	    //Preconditions:	none
	    //Postconditions:	item at index may be changed
	    //Input:		index(int)
	    //Output:		none
	    //Exception:	out_of_range if index does not exist
	    Type& operator[](int index) throw (out_of_range);
	    
	    //Method:		operator[]
	    //Description:	retrieves and sets the item at index
	    //Preconditions:	none
	    //Postconditions:	item at index may be changed
	    //Input:		index(int)
	    //Output:		none
	    //Exception:	out_of_range if index does not exist
	    const Type& operator[](int index) const throw (out_of_range);
	    
	    //Method:		operator==
	    //Description:	returns true if this is equal to rightArray and false otherwise
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightArray(Array)
	    //Output:		bool
	    bool operator==(const Array<Type> &rightArray) const;
	    
	    //Method:		operator!=
	    //Description:	returns true if this is not equal to rightArray and false otherwise
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightArray(Array)
	    //Output:		bool
	    bool operator!=(const Array<Type> &rightArray) const;
	    
	    //Method:		operator<
	    //Description:	returns true if this is less than rightArray and false otherwise
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightArray(Array)
	    //Output:		bool
	    bool operator<(const Array<Type> &rightArray) const;
	    
	    //Method:		operator<=
	    //Description:	returns true if this is less than or equal to rightArray and false otherwise
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightArray(Array)
	    //Output:		bool
	    bool operator<=(const Array<Type> &rightArray) const;
	    
	    //Method:		operator>
	    //Description:	returns true if this is greater than rightArray and false otherwise
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightArray(Array)
	    //Output:		bool
	    bool operator>(const Array<Type> &rightArray) const;
	    
	    //Method:		operator>=
	    //Description:	returns true if this is greater than or equal to rightArray and false otherwise
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		rightArray(Array)
	    //Output:		bool
	    bool operator>=(const Array<Type> &rightArray) const;
	    
	    //Method:		Resize
	    //Description:	resizes the array
	    //Preconditions:	none
	    //Postconditions:	size changed to newSize
	    //			list is truncated if newSize is smaller than the current size
	    //Input:		newSize(int)
	    //Output:		none
	    //Exception:	out_of_range if newSize < 0
	    void Resize(int newSize) throw (out_of_range);
	    
	    //Method:		Size
	    //Description:	gets the size
	    //Preconditions:	none
	    //Postconditions:	none
	    //Input:		none
	    //Output:		size(int)
	    int Size() const;
	    
	private:
	    int start;// the start of the array
	    int size;// size of the array
	    Type *list;// the items
    };//end class Array
    
    template<class Type>
    Array<Type>::~Array() {
	delete [] list;
	list = NULL;
    }//end Array<Type>::~Array()
    
    template<class Type>
    Array<Type>::Array() {
	start = 0;
	size = 0;
	list = new Type[size];
    }//end Array<Type>::Array()
    
    template<class Type>
    Array<Type>::Array(int tmpSize) {
	start = 0;
	size = tmpSize;
	list = new Type[size];
    }//end Array<Type>::Array(int tmpSize)
    
    template<class Type>
    Array<Type>::Array(const Array& newArray) {
	size = newArray.size;
	start = newArray.start;
	list = new Type[size];
	for (int i = 0; i < size; i += 1)
	    list[i] = newArray.list[i];
    }//end Array<Type>::Array(const Array& newArray)
    
    template<class Type>
    Array<Type>::Array(int tmpStart, int end) throw (out_of_range) {
	if (end < tmpStart)
	    throw out_of_range("index out of range");
	start = tmpStart;
	size = end - start + 1;
	list = new Type[size];
    }//end Array<Type>::Array(int tmpStart, int end)
    
    template<class Type>
    Array<Type>::Array(char tmpStart, char end) throw (out_of_range) {
	if (end < tmpStart)
	    throw out_of_range("index out of range");
	start = static_cast<int>(tmpStart);
	size = static_cast<int>(end) - start + 1;
	list = new Type[size];
    }//end Array<Type>::Array(char start, char end)
    
    template<class Type>
    const Array<Type>& Array<Type>::operator=(const Array<Type>& rightArray) {
	if (&rightArray != this) {
	    size = rightArray.size;
	    start = rightArray.start;
	    delete list;
	    list = new Type[size];
	    for (int i = 0; i < size; i += 1)
		list[i] = rightArray.list[i];
	}//end if (&this != rightArray)
	return *this;
    }//end const Array<Type>& Array<Type>::operator=(const Array<Type>& rightArray)
    
    template<class Type>
    Type& Array<Type>::operator[](int index) throw (out_of_range) {
	if (start <= index && index < start + size) {
	    index = index - start;
	    return list[index];
	}//end if (start <= index && index < start + size)
	throw out_of_range("index out of range");
    }//end Type& Array<Type>::operator[](int index)
    
    template<class Type>
    const Type& Array<Type>::operator[](int index) const throw (out_of_range) {
	if (start <= index && index < start + size) {
	    index = index - start;
	    return list[index];
	}//end if (start <= index && index < start + size)
	throw out_of_range("index out of range");
    }//end const Type& Array<Type>::operator[](int index) const
    
    template<class Type>
    bool Array<Type>::operator==(const Array<Type> &rightArray) const {
	if (size == rightArray.size) {
	    for (int i = 0; i < size; i += 1)
		if (list[i] != rightArray.list[i])
		    return false;
	    return true;
	}//end if (size == rightArray.size)
	return false;
    }//end bool Array<Type>::operator==(const Array<Type> &rightArray) const
    
    template<class Type>
    bool Array<Type>::operator!=(const Array<Type> &rightArray) const {
	return !(*this == rightArray);
    }//end bool Array<Type>::operator!=(const Array<Type> &rightArray) const
    
    template<class Type>
    bool Array<Type>::operator<(const Array<Type> &rightArray) const {
	if (size < rightArray.size) {
	    for (int i = 0; i < size; i += 1) {
		if (list[i] < rightArray.list[i])
		    return true;
		else if (list[i] > rightArray.list[i])
		    return false;
	    }//end for (int i = 0; i < size; i += 1)
	    return true;
	}//end if (size < rightArray.size)
	else if (rightArray.size < size) {
	    for (int i = 0; i < rightArray.size; i += 1) {
		if (list[i] < rightArray.list[i])
		    return true;
		else if (list[i] > rightArray.list[i])
		    return false;
	    }//end for (int i = 0; i < rightArray.size; i += 1)
	    return false;
	}//end else if (rightArray.size < size)
	else {
	    for (int i = 0; i < size; i += 1) {
		if (list[i] < rightArray.list[i])
		    return true;
		else if (list[i] > rightArray.list[i])
		    return false;
	    }//end for (int i = 0; i < size; i += 1)
	    return false;
	}//end else
    }//end bool Array<Type>::operator<(const Array<Type> &rightArray) const
    
    template<class Type>
    bool Array<Type>::operator<=(const Array<Type> &rightArray) const {
	return (*this < rightArray || *this == rightArray);
    }//end bool Array<Type>::operator<=(const Array<Type> &rightArray) const
    
    template<class Type>
    bool Array<Type>::operator>(const Array<Type> &rightArray) const {
	return !(*this <= rightArray);
    }//end bool Array<Type>::operator>(const Array<Type> &rightArray) const
    
    template<class Type>
    bool Array<Type>::operator>=(const Array<Type> &rightArray) const {
	return !(*this < rightArray);
    }//end bool Array<Type>::operator>=(const Array<Type> &rightArray) const
    
    template<class Type>
    void Array<Type>::Resize(int newSize) throw (out_of_range) {
	if (newSize < 0)
	    throw out_of_range("index out of range");
	Type *tmpList;
	tmpList = new Type[newSize];
	
	if (size < newSize)
	    for (int i = 0; i < size; i += 1)
		tmpList[i] = list[i];
	else
	    for (int i = 0; i < newSize; i += 1)
		tmpList[i] = list[i];
	    
	delete [] list;
	size = newSize;
	list = new Type[size];
	for (int i = 0; i < size; i += 1)
	    list[i] = tmpList[i];
	delete [] tmpList;
	tmpList = NULL;
    }//end void Array<Type>::Resize(int newSize)
    
    template<class Type>
    int Array<Type>::Size() const {
	return size;
    }//end int Array<Type>::Size() const
}//end namespace ArrayNameSpace

#endif
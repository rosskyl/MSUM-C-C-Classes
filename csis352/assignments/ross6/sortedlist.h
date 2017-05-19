//Author:   	Kyle Ross
//Assignment:	6
//Professor:	Dan Brekke
//Due:		April 8, 2016
//File:     	sortedlist.h
//Description:	specification and implementation of SortedList



#ifndef __SORTEDLIST__
#define __SORTEDLIST__

#include <list>
using std::list;
#include <stdexcept>
using std::range_error;



enum order {ASCENDING, DESCENDING};//the order a list is

template<class Type>
class SortedList: public list<Type> {
    public:
	//Method:		SortedList
	//Description:		default constructor
	//Preconditions:	none
	//Postconditions:	isDescending is ASCENDING
	//Input:		none
	//Output:		none
	SortedList();
	
	//Method:		SortedList
	//Description:		constructor
	//Preconditions:	none
	//Postconditions:	none
	//Input:		isDescending(order)
	//Output:		none
	SortedList(order tmpOrder);
	
	//Method:		isnert
	//Description:		inserts the item into the proper position
	//Preconditions:	the relational operators are overloaded for Type
	//Postconditions:	item inserted into the list
	//Input:		item(Type)
	//Output:		none
	void insert(const Type& item);//precondition relational operators overloaded
	
	//Method:		traverse
	//Description:		performs the function on each item in the list
	//Preconditions:	none
	//Postconditions:	each item may be changed if the function changes the item
	//Input:		fp(function pointer) with item
	//Output:		none
	void traverse(void (*fp) (Type& item));
	
	//Method:		traverse
	//Description:		performs the function on each item in the list
	//Preconditions:	none
	//Postconditions:	none
	//Input:		fp(function pointer) with const item
	//Output:		none
	void traverse(void (*fp) (const Type& item)) const;
	
	//Method:		reset
	//Description:		resets the iterator to the beginning
	//Preconditions:	none
	//Postconditions:	iterator set to the beginning
	//Input:		none
	//Output:		none
	void reset();
	
	//Method:		current
	//Description:		gets the item the iterator is pointing at
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		none
	//Throws:		range_error if trying to get the item when at the end
	Type current() const throw (range_error);
	
	//Method:		next
	//Description:		moves the iterator to the next item
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		none
	//Throws:		range_error if trying to move past the end of the list
	void next() throw (range_error);
	
	//Method:		previous
	//Description:		moves the iterator to the previous item
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		none
	//Throws:		range_error if trying to move before the beginning of the list
	void prev() throw (range_error);
	
	//Method:		endOfList
	//Description:		checks if the iterator is at the end of the list
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		bool
	bool endOfList() const;
	
	//Method:		inList
	//Description:		checks if the item is in the list
	//Preconditions:	none
	//Postconditions:	none
	//Input:		item(Type)
	//Output:		bool
	bool inList(const Type& item) const;
	
	//Method:		count
	//Description:		gets the number of times the item is in the list
	//Preconditions:	none
	//Postconditions:	none
	//Input:		item(Type)
	//Output:		int
	int count(const Type& item) const;
	
	//Method:		erase
	//Description:		deletes the first occurence of item in the list
	//Preconditions:	none
	//Postconditions:	first occurence of item is removed
	//Input:		item(Type)
	//Output:		none
	void erase(const Type& item);
	
	//Method:		remove
	//Description:		deletes all occurences of item in the list
	//Preconditions:	none
	//Postconditions:	all occurences of item are removed from the list
	//Input:		item(Type)
	//Output:		none
	void remove(const Type& item);
	
	//Method:		reverse
	//Description:		reverses the items in the list and changes the order
	//			i.e. if the list was ASCENDING the list is now DESCENDING
	//Preconditions:	none
	//Postconditions:	items reversed and order changed
	//Input:		none
	//Output:		none
	void reverse();
	
	//Method:		merge
	//Description:		combines this list with otherList in the order of this list
	//Preconditions:	none
	//Postconditions:	otherList's items added to this list in the proper order
	//Input:		otherList(SortedList<Type>)
	//Output:		none
	void merge(SortedList<Type> otherList);
    private:
	typename list<Type>::iterator iter;//the iterator for next, current, reset, previous, and endOfList
	order isDescending;//the order of the list
};//end class SortedList: public list<Type>

template<class Type>
SortedList<Type>::SortedList() {
    isDescending = ASCENDING;
}//end SortedList<Type>::SortedList()

template<class Type>
SortedList<Type>::SortedList(order tmpOrder) {
    isDescending = tmpOrder;
}//end SortedList<Type>::SortedList(order tmpOrder);

template<class Type>
void SortedList<Type>::insert(const Type& item) {
    typename list<Type>::iterator i = this->begin();
    
    if (isDescending == DESCENDING)
	while (item <= *i && i != this->end())
	    i++;
    else
	while (item >= *i && i != this->end())
	    i++;
    list<Type>::insert(i, item);
}//end void SortedList<Type>::insert(Type& item)

template<class Type>
void SortedList<Type>::traverse(void (*fp) (Type& item)) {
    typename list<Type>::iterator i;
    for (i = this->begin(); i != this->end(); i++)
	fp(*i);
}//end void SortedList<Type>::traverse(void (*fp) (Type& item))

template<class Type>
void SortedList<Type>::traverse(void (*fp) (const Type& item)) const {
    typename list<Type>::const_iterator i;
    for (i = this->begin(); i != this->end(); i++)
	fp(*i);
}//end void SortedList<Type>::traverse(void (*fp) (const Type& item)) const

template<class Type>
void SortedList<Type>::reset() {
    iter = this->begin();
}//end void SortedList<Type>::reset()

template<class Type>
Type SortedList<Type>::current() const throw (range_error) {
    if (iter == this->end())
	throw range_error("attempt to access past the end of the list");
    return *iter;
}//end Type SortedList<Type>::current() const

template<class Type>
void SortedList<Type>::next() throw (range_error) {
    if (iter == this->end())
	throw range_error("attempted next already past the end of the list");
    iter++;
}//end void SortedList<Type>::next()

template<class Type>
void SortedList<Type>::prev() throw (range_error) {
    if (iter == this->begin())
	throw range_error("attempt to move before the beginning of the list");
    iter--;
}//end void SortedList<Type>::prev()

template<class Type>
bool SortedList<Type>::endOfList() const {
    return iter == this->end();
}//end bool SortedList<Type>::endOfList()

template<class Type>
bool SortedList<Type>::inList(const Type& item) const {
    typename list<Type>::const_iterator i;
    for (i = this->begin(); i != this->end(); i++)
	if (item == *i)
	    return true;
	else if (isDescending == ASCENDING && item < *i)
	    return false;
	else if (isDescending == DESCENDING && item > *i)
	    return false;
    return false;
}//end bool SortedList<Type>::inList(Type& item) const

template<class Type>
int SortedList<Type>::count(const Type& item) const {
    int count = 0;
    typename list<Type>::const_iterator i;
    for (i = this->begin(); i != this->end(); i++)
	if (item == *i)
	    count += 1;
	else if (isDescending == ASCENDING && item < *i)
	    return count;
	else if (isDescending == DESCENDING && item > *i)
	    return count;
	return count;
}//end int SortedList<Type>::count() const

template<class Type>
void SortedList<Type>::erase(const Type& item) {
    bool deleted = false;
    typename list<Type>::iterator i = this->begin();
    while (i != this->end() && !deleted) {
	if (item == *i) {
	    list<Type>::erase(i);
	    deleted = true;
	}//end if (item == *i)
	i++;
    }//end while (i != this->end() && !deleted)
}//end void SortedList<Type>::erase(Type& item)

template<class Type>
void SortedList<Type>::remove(const Type& item) {
    typename list<Type>::iterator i = this->begin();
    typename list<Type>::iterator tmp;
    while (i != this->end()) {
	if (item == *i) {
	    tmp = i;
	    i--;
	    list<Type>::erase(tmp);
	}
	else if (isDescending == ASCENDING && item < *i)
	    break;
	else if (isDescending == DESCENDING && item > *i)
	    break;
	i++;
    }
}//end void SortedList<Type>::remove(Type& item)

template<class Type>
void SortedList<Type>::reverse() {
    list<Type>::reverse();
    if (isDescending == ASCENDING)
	isDescending = DESCENDING;
    else
	isDescending = ASCENDING;
}//end void SortedList<Type>::reverse()

template<class Type>
void SortedList<Type>::merge(SortedList<Type> otherList) {
    order original = isDescending;

    //need to merge them when they are ASCENDING
    if (isDescending == DESCENDING)
	reverse();
    if (otherList.isDescending == DESCENDING)
	otherList.reverse();
    
    list<Type>::merge(otherList);
    
    if (original == DESCENDING)
	reverse();
}//end void SortedList<Type>::merge(SortedList<Type> otherList)

#endif

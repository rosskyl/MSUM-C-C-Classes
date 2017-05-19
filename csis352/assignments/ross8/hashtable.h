//Author:   	Kyle Ross
//Assignment:	8
//Professor:	Dan Brekke
//Due:		May 3, 2016
//File:     	hashtable.h
//Description:	specification and implementation of HashTable

#ifndef _HASHTABLE_
#define _HASHTABLE_

#include <vector>
#include <stdexcept>

using std::invalid_argument;
using std::vector;




template<class Type>
class HashTable {
    public:
	//Method:		~HashTable
	//Description:		deconstructor
	//Preconditions:	none
	//Postconditions:	the list is destroyed
	//Input:		none
	//Output:		none
	~HashTable();
	
	//Method:		HashTable
	//Description:		constructor
	//Preconditions:	none
	//Postconditions:	list is created,
	//			collisions set to 0
	//Input:		tmpSize(int) the size of the list
	//			fp(a function pointer that returns an int and takes a const pass by reference
	//				parameter of Type
	//Output:		none
	HashTable(int tmpSize, int (*fp) (const Type&));
	
	//Method:		hash
	//Description:		gets the hash of item
	//Preconditions:	none
	//Postconditions:	none
	//Input:		item(Type)
	//Output:		the hash of item
	int hash(const Type& item) const;
	
	//Method:		insert
	//Description:		inserts item into the list
	//Preconditions:	none
	//Postconditions:	item is inserted into the list
	//Input:		item(Type)
	//Output:		none
	//Throws:		invalid_argument if the hash of item is outside the size of the list
	void insert(const Type& item) throw(invalid_argument) ;
	
	//Method:		search
	//Description:		searches the list to see if item is in it
	//Preconditions:	none
	//Postconditions:	none
	//Input:		item(Type)
	//Output:		bool of true if item is in the list
	//Throws:		invalid_argument if the hash of item is outside the size of the list
	bool search(const Type& item) const throw(invalid_argument);
	
	//Method:		Collisions
	//Description:		gets the number of collisions
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		int
	int Collisions() const;
	
	//Method:		retrieve
	//Description:		copies what is at the hash of item into item
	//Preconditions:	none
	//Postconditions:	item is changed to what is at the hash of item
	//Input:		item(Type)
	//Output:		none
	//Throws:		invalid_argument if the hash of item is outside the size of the list
	void retrieve(Type& item) const throw(invalid_argument);
    private:
	int size;//the size of the list
	vector<Type*> v;//the actual list
	int (*hashFunction) (const Type&);//the hashing function
	int collisions;//the number of collisions
};

template<class Type>
HashTable<Type>::~HashTable() {
    for (int i = 0; i < v.size(); i++)
	if (v[i] != NULL) {
	    delete v[i];
	    v[i] = NULL;
	}//end if (v[i] != NULL)
}//end HashTable<Type>::~HashTable()

template<class Type>
HashTable<Type>::HashTable(int tmpSize, int (*fp) (const Type&)) {
    size = tmpSize;
    hashFunction = fp;
    v.resize(size);
    collisions = 0;
}//end HashTable<Type>::HashTable(int tmpSize, int (*fp) (const Type&))

template<class Type>
int HashTable<Type>::hash(const Type& item) const {
    return hashFunction(item);
}//end int HashTable<Type>::hash(const Type& item) const

template<class Type>
void HashTable<Type>::insert(const Type& item) throw(invalid_argument) {
    int hash = hashFunction(item);
    
    if (hash >= size || hash < 0)
	throw invalid_argument("Invalid hash");
    
    int pos = hash;
    
    Type* tmp = new Type(item);
    
    while (v[pos] != NULL) {
	pos *= 2;
	if (pos >= v.size())
	    v.resize(v.size() + size);
    }//end while (v[pos] != NULL)
    
    v[pos] = tmp;
    
    if (hash != pos)
	collisions += 1;
}//end void HashTable<Type>::insert(const Type& item) throw(invalid_argument)

template<class Type>
bool HashTable<Type>::search(const Type& item) const throw(invalid_argument) {
    int hash = hashFunction(item);
    
    if (hash >= size || hash < 0)
	throw invalid_argument("Invalid hash");
    
    bool found = false;
    while (v[hash] != NULL && !found && hash < v.size()) {
	if (*(v[hash]) == item)
	    found = true;
	hash *= 2;
    }//end while (v[hash] != NULL && !found && hash < v.size())
    
    return found;
}//end bool HashTable<Type>::search(const Type& item) const throw(invalid_argument)

template<class Type>
int HashTable<Type>::Collisions() const {
    return collisions;
}//end int HashTable<Type>::Collisions() const

template<class Type>
void HashTable<Type>::retrieve(Type& item) const throw(invalid_argument) {
    int hash = hashFunction(item);
    
    if (hash >= size || hash < 0)
	throw invalid_argument("Invalid hash");
    
    bool found = false;
    while (v[hash] != NULL && !found && hash < v.size()) {
	if (*(v[hash]) == item)
	    found = true;
	else
	    hash *= 2;
    }//end while (v[hash] != NULL && !found && hash < v.size())
    
    item = *(v[hash]);
}//end void HashTable<Type>::retrieve(Type& item) const throw(invalid_argument)

#endif
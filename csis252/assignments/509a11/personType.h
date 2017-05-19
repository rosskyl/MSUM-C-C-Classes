//File:		personType.h
//Author:	Kyle Ross
//Assignment:	8
//Professor:	Brekke
//Due:		11/7/2014
//Description:	contains specifications for personType class


#ifndef __personType_h__
#define __personType_h__

#include "dateType.h"


class personType {
    public:
	//Method:		personType
	//Description:		default constructor
	//Preconditions:	none
	//Postconditions:	name and birthday are initialized
	//Input:		none
	//Output:		none
	personType();
	
	//Method:		personType
	//Description:		constructor
	//Preconditions:	none
	//Postconditions:	name is set to tmpName and birthday is set
	//			to tmpBirthday
	//Input:		tmpName(string) name
	//			tmpBirthday(dateType) birthday
	//Output:		none
	personType(const string& tmpName, const dateType& tmpBirthday);
	
	//Method:		getName
	//Description:		gets the name
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		name(string) name
	string getName() const;
	
	//Method:		setName
	//Description:		sets the name
	//Preconditions:	none
	//Postconditions:	name changed to tmpName
	//Input:		tmpName(string) name
	//Output:		none
	void setName(const string& tmpName);
	
	//Method:		getBirthday
	//Description:		gets the birthday
	//Preconditions:	none
	//Postconditions:	none
	//Input:		none
	//Output:		birthday(dateType) birthday
	dateType getBirthday() const;
	
	//Method:		setBirthday
	//Description:		sets the birthday
	//Preconditions:	none
	//Postconditions:	birthday is changed to tmpBirthday
	//Input:		tmpBirthday(dateType) birthday
	//Output:		none
	void setBirthday(const dateType& tmpBirthday);
	
	//Method:		operator==
	//Description:		returns whether person's birthday is equal to
	//			otherPerson's birthday
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherPerson(personType)
	//Output:		bool
	bool operator==(const personType& otherPerson) const;
	
	//Method:		operator<
	//Description:		returns whether person's birthday less than
	//			otherPerson's birthday
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherPerson(personType)
	//Output:		bool
	bool operator<(const personType& otherPerson) const;
	
	//Method:		operator!=
	//Description:		returns whether person's birthday is not equal
	//			to otherPerson's birthday
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherPerson(personType)
	//Output:		bool
	bool operator!=(const personType& otherPerson) const;
	
	//Method:		operator<=
	//Description:		returns whether person's birthday less than
	//			or equal otherPerson's birthday
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherPerson(personType)
	//Output:		bool
	bool operator<=(const personType& otherPerson) const;
	
	//Method:		operator>
	//Description:		returns whether person's birthday greater than
	//			otherPerson's birthday
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherPerson(personType)
	//Output:		bool
	bool operator>(const personType& otherPerson) const;
	
	//Method:		operator<
	//Description:		returns whether person's birthday greater than
	//			or equal otherPerson's birthday
	//Preconditions:	none
	//Postconditions:	none
	//Input:		otherPerson(personType)
	//Output:		bool
	bool operator>=(const personType& otherPerson) const;
    
    private:
	string name;//name of personType
	dateType birthday;//birthday of person
};//end personType class

#endif
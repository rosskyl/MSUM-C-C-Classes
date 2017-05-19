//File:		personType.h
//Author:	Kyle Ross
//Assignment:	8
//Professor:	Brekke
//Due:		11/7/2014
//Description:	contains implementation for personType class


#include "personType.h"

personType::personType() {
    dateType tmpBirthday;
    setName("");
    setBirthday(tmpBirthday);
}//end personType method--default constructor

personType::personType(const string& tmpName, const dateType& tmpBirthday) {
    setName(tmpName);
    setBirthday(tmpBirthday);
}//end personType method--constructor

string personType::getName() const {
    return name;
}//end getName method

void personType::setName(const string& tmpName) {
    name = tmpName;
}//end setName

dateType personType::getBirthday() const {
    return birthday;
}//end getBirthday method

void personType::setBirthday(const dateType& tmpBirthday) {
    birthday = tmpBirthday;
}//end setBirthday method

bool personType::operator==(const personType& otherPerson) const {
    return getBirthday() == otherPerson.getBirthday();
}//end operator==

bool personType::operator<(const personType& otherPerson) const {
    return getBirthday() < otherPerson.getBirthday();
}//end operator<

bool personType::operator!=(const personType& otherPerson) const {
    return getBirthday() != otherPerson.getBirthday();
}//end operator!=

bool personType::operator<=(const personType& otherPerson) const {
    return getBirthday() <= otherPerson.getBirthday();
}//end operator<=

bool personType::operator>(const personType& otherPerson) const {
    return getBirthday() > otherPerson.getBirthday();
}//end operator>

bool personType::operator>=(const personType& otherPerson) const {
    return getBirthday() >= otherPerson.getBirthday();
}//end operator>=
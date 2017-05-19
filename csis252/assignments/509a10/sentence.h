//File:		sentence.h
//Author:	Kyle Ross
//Assignment:	10
//Professor:	Brekke
//Due:		11/24/2014
//Description:	contains specification for the sentence class


#ifndef __sentence_h__
#define __sentence_h__

#include <iostream>
#include <string>
using namespace std;

class Sentence {
    public:
	//Description:		constructor
	//Input:		tmpSentence (string)
	//Output:		none
	//Preconditions:	none
	//Postconditions:	none
	Sentence(const string& tmpSentence="");
	
	//Description:		sets the sentence
	//Input:		tmpSentence (String)
	//Ouput:		none
	//Preconditions:	none
	//PostConditions:	sentence changed to tmpSentence
	void setSentence(const string& tmpSentence);
	
	//Description:		retrieves the sentence
	//Input:		none
	//Ouput:		sentence (string)
	//Preconditions:	none
	//PostConditions:	none
	string getSentence() const;
	
	//Description:		checks if the sentence is a palindrome
	//Input:		none
	//Ouput:		isPalindrome (bool)
	//Preconditions:	none
	//PostConditions:	none
	bool isPalindrome() const;

    private:
	//sentence
	string sentence;
};

//Description:		in stream
//Input:		in (istream)
//			s (Sentence)
//Ouput:		in (istream)
//Preconditions:	none
//PostConditions:	s is changed to the instreams sentence
istream& operator>>(istream& in, Sentence& s);

//Description:		out stream
//Input:		out (ostream)
//			s (Sentence)
//Ouput:		out (ostream)
//Preconditions:	none
//PostConditions:	none
ostream& operator<<(ostream& out, const Sentence& s);

#endif
//File:		sentence.cpp
//Author:	Kyle Ross
//Assignment:	10
//Professor:	Brekke
//Due:		11/24/2014
//Description:	contains impementation for the sentence class

#include <string>
#include "sentence.h"
#include "queueType.h"
#include "stackType.h"

Sentence::Sentence(const string& tmpSentence) {
    setSentence(tmpSentence);
}//end Sentence method--constructor

void Sentence::setSentence(const string& tmpSentence) {
    sentence = tmpSentence;
}//end setSentence method

string Sentence::getSentence() const {
    return sentence;
}//end getSentence method

bool Sentence::isPalindrome() const {
    string s = getSentence();
    queueType<char> queue(s.length());
    stackType<char> stack(s.length());
    bool isPalindrome = true;
    char first;
    char last;
    
    for (int i=0; i<s.length(); i+=1) 
	if (isalpha(s[i]) || isdigit(s[i])) {
	    queue.addQueue(tolower(s[i]));
	    stack.push(tolower(s[i]));
	}//end if
	
    while (!queue.isEmptyQueue() && !stack.isEmptyStack() && isPalindrome) {
	first = queue.front();
	queue.deleteQueue();
	
	last = stack.top();
	stack.pop();
	
	if (first != last)
	    isPalindrome = false;
    }//end while loop
    return isPalindrome;
}//end isPalindrome method

istream& operator>>(istream& in, Sentence& s) {
    string sentence = "";
    char letter;
    
    in.get(letter);
    if (letter == '\n')
	in.get(letter);
    while (!in.eof() && letter != '.') {
	//cerr << "letter=" << letter << endl;
	sentence += letter;
	in.get(letter);
    }//end while loop
    if (letter == '.')
	sentence += letter;
    s.setSentence(sentence);
    
    return in;
}//end operator>> function

ostream& operator<<(ostream& out, const Sentence& s) {
    out << s.getSentence();
    return out;
}//end operator<<
//File:		output.cpp
//Author:	Kyle Ross
//Assignment:	10
//Professor:	Brekke
//Due:		11/24/2014
//Description:	contains output function which outputs all the sentences and
//		if they are palindromes or not



#include "sentence.h"
#include "arrayListType.h"
#include <fstream>


void output(ofstream& outFile, arrayListType<Sentence>& sentences) {
    //Description:	outputs all the sentences and if they are 
    //			palindromes or not
    //Input:		outFile (ofstream) file to output to
    //			sentences (arrayListType<Sentence>) list of sentences
    //Ouput:		none
    //Preconditions:	outFile is opened
    //PostConditions:	sentences are written to outFile and whether or not
    //			they are a palindrome
    
    Sentence s;
    string palindrome;
    
    for (int i=0; i<sentences.listSize(); i+=1) {
	sentences.retrieveAt(i,s);
	if (s.isPalindrome())
	    palindrome = "palindrome";
	else
	    palindrome = "";
	
	outFile << palindrome << "\n-----------------------------------\n";
	outFile << s << endl << endl;
    }//end for loop
    
    
}//end output function
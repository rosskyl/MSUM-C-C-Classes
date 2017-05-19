//File:		read.cpp
//Author:	Kyle Ross
//Assignment:	10
//Professor:	Brekke
//Due:		11/24/2014
//Description:	contains read function which reads a file for sentences


#include "arrayListType.h"
#include "sentence.h"
#include <fstream>

arrayListType<Sentence> read(ifstream& inFile) {
    //Description:	reads inFile for sentences and adds them to a list
    //Input:		inFile (ifstream) file to read from
    //Ouput:		sentences (arrayListType<Sentence>) list of sentences
    //Preconditions:	inFile is opened
    //PostConditions:	none
    
    arrayListType<Sentence> sentences;
    Sentence tmpSent;
    
    inFile >> tmpSent;
    while (!inFile.eof() && !sentences.isFull()) {
	sentences.insertEnd(tmpSent);
	inFile >> tmpSent;
    }//end while loop
    
    return sentences;
}//end read function
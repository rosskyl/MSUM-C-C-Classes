//File:		prototypes.h
//Author:	Kyle Ross
//Assignment:	10
//Professor:	Brekke
//Due:		11/24/2014
//Description:	contains function prototypes

#include <fstream>

arrayListType<Sentence> read(ifstream & inFile);
void output(ofstream& outFile, arrayListType<Sentence>& sentences);
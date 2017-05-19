//File:		main.cpp
//Author:	Kyle Ross
//Assignment:	10
//Professor:	Brekke
//Due:		11/24/2014
//Description:	main


#include "sentence.h"
#include "arrayListType.h"
#include "prototypes.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;




int main(int argc, char* argv[]) {
    ifstream inFile;
    ofstream outFile;
    arrayListType<Sentence> sentences;
    Sentence s;
    
    if (argc != 3) {
	cout << "not enough arguments" << endl;
	exit(1);
    }//end if
    
    inFile.open(argv[1]);
    
    if (inFile.fail()) {
	cout << "error reading text file" << endl;
	exit(1);
    }//end if
    
    sentences = read(inFile);
    
    inFile.close();
    
    outFile.open(argv[2]);
    
    output(outFile, sentences);
    
    outFile.close();
    
    return 1;
}//end main
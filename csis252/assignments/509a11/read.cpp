//File:		read.cpp
//Author:	Kyle Ross
//Assignment:	11
//Professor:	Brekke
//Due:		12/8/2014
//Description:	contains read function which reads a file


#include <fstream>
#include "studentType.h"
#include "binarySearchTree.h"


//Function:		read
//Description:		reads the file in for the test score and each student
//Preconditions:	in is opened
//Postconditions:	none
//Input:		in(ifstream)
//Output:		tree(bSearchTreeType<studentType>)
bSearchTreeType<studentType> read(ifstream& in) {
    int maxScore;//max score placeholder
    studentType tempStudent;//student placeholder
    bSearchTreeType<studentType> tree;//binary search tree to be returned
    
    in >> maxScore;
    studentType::setMaxScore(maxScore);
    
    in >> tempStudent;
    
    while (!in.eof()) {
	tree.insert(tempStudent);
	in >> tempStudent;
    }//end while
    
    return tree;
}//end read function
//File:		output.cpp
//Author:	Kyle Ross
//Assignment:	11
//Professor:	Brekke
//Due:		12/8/2014
//Description:	contains function output which outputs the name, ID, score,
//		percentage, and grade for each student



#include <iostream>
#include <iomanip>
#include "studentType.h"
#include "binarySearchTree.h"

using namespace std;

//Function:		output
//Description:		outputs headers and each student
//Preconditions:	none
//Postconditions:	each student printed to cout
//Input:		tree(bSearchTreeType<studentType>)
//Output:		none
void output(bSearchTreeType<studentType>& tree) {
    cout << left << setw(25) << "Name";
    cout << right << setw(11) << "Dragon ID";
    cout << right << setw(7) << "Score";
    cout << right << setw(8) << "PCT";
    cout << right << setw(7) << "Grade" << endl;
    
    cout << "-------------------------";
    cout << "  ---------  -----  ------  -----" << endl;
    
    tree.inorderTraversal();
}//end output function
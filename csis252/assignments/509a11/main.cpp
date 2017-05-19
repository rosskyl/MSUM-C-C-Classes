//File:		main.cpp
//Author:	Kyle Ross
//Assignment:	11
//Professor:	Brekke
//Due:		12/8/2014
//Description:	main

#include "studentType.h"
#include "binarySearchTree.h"
#include "prototypes.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    bSearchTreeType<studentType> tree;
    ifstream in;
    
    if (argc != 2) {
	cout << "Error--need to provide a file name" << endl;
	exit(1);
    }//end if
    
    in.open(argv[1]);
    
    if (in.fail()) {
	cout << "Error--reading text file" << endl;
	exit(1);
    }//end if
    
    tree = read(in);
    in.close();
    
    output(tree);
    
    return 0;
}//end main
//File:		prototypes.h
//Author:	Kyle Ross
//Assignment:	11
//Professor:	Brekke
//Due:		12/8/2014
//Description:	contains all prototypes

#include <fstream>
#include "binarySearchTree.h"
#include "studentType.h"
#include "binarySearchTree.h"


bSearchTreeType<studentType> read(ifstream& in);
void output(bSearchTreeType<studentType>& tree);
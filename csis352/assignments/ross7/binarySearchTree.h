//Header File Binary Search Tree

#ifndef H_binarySearchTree
#define H_binarySearchTree
#include <iostream>
#include <cassert>
#include <stdexcept>
#include "binaryTree.h"

using namespace std;

template<class elemType>
class bSearchTreeType: public binaryTreeType<elemType>
{
public:
    bool search(const elemType& searchItem) const;
      //Function to determine if searchItem is in the binary 
      //search tree.
      //Postcondition: Returns true if searchItem is found in the 
      //               binary search tree; otherwise, returns false.

    void insert(const elemType& insertItem);
      //Function to insert insertItem in the binary search tree.
      //Postcondition: If there is no node in the binary search
      //               tree that has the same info as insertItem,
      //               a node with the info insertItem is created
      //               and inserted in the binary search tree.


    void deleteNode(const elemType& deleteItem);
      //Function to delete deleteItem from the binary search tree 
      //Postcondition: If a node with the same info as deleteItem 
      //               is found, it is deleted from the binary 
      //               search tree.
	  //               If the binary tree is empty or deleteItem
      //               is not in the binary tree, an appropriate
      //               message is ptinted.
    
    int level(const elemType& item) const;
    //Function to return the level of the tree where item is.
    //     The level is the number of branches from the root to the node. 
    //     The root is at level 0.
    //Input: item to find the level where it's at
    //Output: level where item is
    //Precondition:  item must be in the tree
    //Postcondition: Returns the level where item is 
    //Comment: I recommend this go in the binary search tree as it becomes
    //         a much cleaner method.  Not so fun making it a binary 
    //         tree method

    void path(const elemType& item) const;
    //Function to output the path from the item to the root with each
    //     item separated with a blank
    //Input: item to find the path
    //Output: none
    //Precondition:  item must be in the tree
    //Postcondition: the path is output
    
    bool siblings(const elemType& item1, const elemType& item2) const;
    //Function to return whether the items are siblings (by definition) or not
    //Input: two items of the type stored in the tree
    //Output: true if the items are siblings, otherwise false
    //Precondition: none 
    //Postcondition: whether items are siblings is returned

private:
    void deleteFromTree(nodeType<elemType>* &p);
      //Function to delete the node to which p points is deleted
      //from the binary search tree.
      //Postcondition: The node to which p points is deleted
      //               from the binary search tree.
    
    int levelNode(const elemType& item, nodeType<elemType> *p) const;
      //Function to determine the level of the item in the binary tree
      //to which p points
      //Postcondition: The level item is at in the binary tree to which
      //		p points
    
    void pathNode(const elemType& item, nodeType<elemType> *p) const;
      //Function to print the path to item in the binary tree to which p points
      //Postcondition: Each item in the path to item is printed in the binary
      //		tree to which p points
    
    bool siblingsNode(const elemType& item1, const elemType& item2, nodeType<elemType> *p) const;
      //Function to check if item1 and item2 are siblings in the binary tree
      //to which p points
      //Postcondition: boolean of true if item1 and item2 are siblings in the
      //		binary tree to which p points
};


template<class elemType>
bool bSearchTreeType<elemType>::search(const elemType& searchItem) const
{
    nodeType<elemType> *current;
    bool found = false;

    if (binaryTreeType<elemType>::root == NULL)
        cout << "Cannot search an empty tree." << endl;
    else
    { 
       current = binaryTreeType<elemType>::root;

       while (current != NULL && !found)
       {
             if (current->info == searchItem)
                 found = true;
              else
                  if (current->info > searchItem)
                      current = current->llink;
                  else
                      current = current->rlink;
       }//end while
    }//end else

    return found;
}//end search

template<class elemType>
void bSearchTreeType<elemType>::insert(const elemType& insertItem)
{
    nodeType<elemType> *current;  //pointer to traverse the tree
    nodeType<elemType> *trailCurrent; //pointer behind current
    nodeType<elemType> *newNode;  //pointer to create the node

    newNode = new nodeType<elemType>;
    assert(newNode != NULL);
    newNode->info = insertItem;
    newNode->llink = NULL;
    newNode->rlink = NULL;

    if (binaryTreeType<elemType>::root == NULL)
       binaryTreeType<elemType>::root = newNode;
    else
    {
       current = binaryTreeType<elemType>::root;
 
       while (current != NULL)
       {
           trailCurrent = current;

           if (current->info == insertItem)
           {
               cout << "The item to be inserted is already in ";
               cout << "the list -- duplicates are not allowed."
                    << endl;
               return;
           }
           else
               if (current->info > insertItem)
                   current = current->llink;
               else
                   current = current->rlink;
       }//end while

       if (trailCurrent->info > insertItem)
           trailCurrent->llink = newNode;
       else
           trailCurrent->rlink = newNode;
   }
}//end insert

template<class elemType>
void bSearchTreeType<elemType>::deleteNode(const elemType& deleteItem)
{
	nodeType<elemType> *current;  //pointer to traverse the tree
	nodeType<elemType> *trailCurrent; //pointer behind current
	bool found = false;

	if (binaryTreeType<elemType>::root == NULL)
		cout << "Cannot delete from an empty tree." 
		     << endl;
	else
	{
		current = binaryTreeType<elemType>::root;
		trailCurrent = binaryTreeType<elemType>::root;

		while (current != NULL && !found)
		{
			if (current->info == deleteItem)
				found = true;
			else
			{
				trailCurrent = current;

				if (current->info > deleteItem)
					current = current->llink;
				else
					current = current->rlink;
			}
		}//end while

		if (current == NULL)
			cout << "The item to be deleted is not in the tree." 
			     << endl;
		else
			if (found)
			{
				if (current == binaryTreeType<elemType>::root)
					deleteFromTree(binaryTreeType<elemType>::root);
				else
					if (trailCurrent->info > deleteItem)
						deleteFromTree(trailCurrent->llink);
					else
						deleteFromTree(trailCurrent->rlink);
			}//end if
	}
}//end deleteNode

template<class elemType>
int bSearchTreeType<elemType>::level(const elemType& item) const {
    return levelNode(item, binaryTreeType<elemType>::root);
}

template<class elemType>
void bSearchTreeType<elemType>::path(const elemType& item) const {
    pathNode(item, binaryTreeType<elemType>::root);
}

template<class elemType>
bool bSearchTreeType<elemType>::siblings(const elemType& item1, const elemType& item2) const {
    return siblingsNode(item1, item2, binaryTreeType<elemType>::root);
}

template<class elemType>
void bSearchTreeType<elemType>::deleteFromTree
                                 (nodeType<elemType>* &p)
{
     nodeType<elemType> *current;    //pointer to traverse 
                                     //the tree
     nodeType<elemType> *trailCurrent;   //pointer behind current
     nodeType<elemType> *temp;        //pointer to delete the node

     if (p == NULL)
         cout << "Error: The node to be deleted is NULL."
              << endl;
     else if (p->llink == NULL && p->rlink == NULL)
          {
             temp = p;
             p = NULL;
             delete temp;
          }
     else if (p->llink == NULL)
          {
             temp = p;
             p = temp->rlink;
             delete temp;
          }
     else if (p->rlink == NULL)
          {
             temp = p;
             p = temp->llink;
             delete temp;
          }
     else
     {
        current = p->llink;
        trailCurrent = NULL;

        while (current->rlink != NULL)
        {
            trailCurrent = current;
            current = current->rlink;
        }//end while

        p->info = current->info;

        if (trailCurrent == NULL) //current did not move; 
                                  //current == p->llink; adjust p
            p->llink = current->llink;
        else
            trailCurrent->rlink = current->llink;
 
        delete current;
     }//end else
}//end deleteFromTree

template<class elemType>
int bSearchTreeType<elemType>::levelNode(const elemType& item, nodeType<elemType> *p) const {
    if (p == NULL)
	throw invalid_argument("Item is not in the tree");
    else if (item == p->info)
	return 0;
    else if (item < p->info)
	return 1 + levelNode(item, p->llink);
    else if (item > p->info)
	return 1 + levelNode(item, p->rlink);
}

template<class elemType>
void bSearchTreeType<elemType>::pathNode(const elemType& item, nodeType<elemType> *p) const {
    if (p == NULL)
	throw invalid_argument("Item is not in the tree");
    else if (item == p->info)
	cout << p->info << " ";
    else if (item < p->info) {
	pathNode(item, p->llink);
	cout << p->info << " ";
    }
    else if (item > p->info) {
	pathNode(item, p->rlink);
	cout << p->info << " ";
    }
}

template<class elemType>
bool bSearchTreeType<elemType>::siblingsNode(const elemType& item1, const elemType& item2, nodeType<elemType> *p) const {
    if (p == NULL)
	throw invalid_argument("item1 is not in the tree");
    else if (item1 == p->info || item2 == p->info)
	return false;
    else if (item1 < p->info)
	if (p->llink != NULL && p->rlink != NULL)
	    return (p->rlink)->info == item2 || siblingsNode(item1, item2, p->llink);
	else
	    return siblingsNode(item1, item2, p->llink);
    else if (item1 > p->info)
	if (p->llink != NULL && p->rlink != NULL)
	    return (p->llink)->info == item2 || siblingsNode(item1, item2, p->rlink);
	else
	    return siblingsNode(item1, item2, p->rlink);
    else
	return false;
}

#endif


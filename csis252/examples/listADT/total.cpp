#include <iostream>
#include "arrayListType.h"
#include "itemtype.h"
using namespace std;

int totalItems(const arrayListType& grocerylist)
{
   GroceryItem item;
   int num=0;
   for (int i=0; i<grocerylist.listSize(); i++)
   {
      grocerylist.retrieveAt(i,item);
      num += item.GetCount();
   }
   return num;
}

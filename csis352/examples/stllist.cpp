#include <iostream>
#include <list>
using namespace std;
int main()
{
   list<int> myList;
   cout << "size: " << myList.size() << endl;
//    cout << "capacity: " << myList.capacity() << endl;  // no capacity
   cout << "max_size: " << myList.max_size() << endl;
   myList.push_back(556);
   myList.push_back(236);
   myList.push_back(526);
   myList.push_back(395);
   list<int>::iterator i;

// Below doesn't work, just as indexing and the .at method doesn't work
// because it's implemented as a linked structure
//    i=myList.begin();
//    while (i < myList.end())
//    {
//       cout << *i << ' ';
//       i++;
//    }
//    cout << endl;

//  this is good stuff here
    for (i=myList.begin(); i!=myList.end(); i++)
       cout << *i << ' ';
    cout << endl;
/*//    i++;
//    cout << *i << endl;
//    i++;
//    cout << *i << endl;
//    i--;
//    cout << *i << endl;
//    i = i+2;  doesn't work
//    cout << *i << endl;
*/
   i = myList.end();
   myList.insert(i,1);
   myList.insert(i,2);
   myList.insert(i,3);
   i=myList.insert(i,4);
   i=myList.insert(i,5);
   i=myList.insert(i,6);
 
    for (i=myList.begin(); i!=myList.end(); i++)
       cout << *i << ' ';
    cout << endl;
    i = myList.end();
    cout << &(*i) << endl;
   return 0;
}
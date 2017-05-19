// BONUS - I wrote the methods without any assistance
//Filename:	main.cpp
//Author:	Kyle Ross
//Assignment:	4
//Due:		3/10/2016
//Professor:	Brekke
//Description:	test linkedQueueType


#include "linkedQueue.h"
#include <iostream>

using namespace std;


const int normalQueueSize = 10;

void testDestructor();
void testCopyConstructor();
void testOperator();

int main() {
    cout << "Testing the destructor. If you see no output, then the test passed" << endl;
    testDestructor();
    cout << endl << "Testing the copy constructor. If you see no output, then the test passed" << endl;
    testCopyConstructor();
    cout << endl << "Testing operator=. If you see no output, then the test passed" << endl;
    testOperator();
    
    return 0;
}//end main()


void testDestructor() {
    linkedQueueType<int> *q1;
    linkedQueueType<int> *q2;
    q1 = new linkedQueueType<int>;
    q1->addQueue(3);
    q1->addQueue(4);
    q2 = q1;
    delete q1;
    if (q2->front() != 0)
	cout << "Should be 0" << endl;
}

void testCopyConstructor() {
    linkedQueueType<int> queue1;
    for (int i = 0; i < normalQueueSize; i += 1)
	queue1.addQueue(i+1);
    
    linkedQueueType<int> queue2(queue1);

    queue1.deleteQueue();
    if (queue2.front() != 1)
	cout << "Should be 1" << endl;
    queue2.deleteQueue();
    
    for (int i = 0; i < normalQueueSize-1; i += 1) {
	if (queue1.front() != queue2.front())
	    cout << "Should be equal" << endl;
	queue1.deleteQueue();
	queue2.deleteQueue();
    }
    
}

void testOperator() {
    linkedQueueType<int> queue1, queue2;
    for (int i = 0; i < normalQueueSize; i += 1)
	queue1.addQueue(i+1);
    
    queue2 = queue1;
    
    queue1.deleteQueue();
    if (queue2.front() != 1)
	cout << "Should be 1" << endl;
    queue2.deleteQueue();
    
    for (int i = 0; i < normalQueueSize-1; i += 1) {
	if (queue1.front() != queue2.front())
	    cout << "Should be equal" << endl;
	queue1.deleteQueue();
	queue2.deleteQueue();
    }
}
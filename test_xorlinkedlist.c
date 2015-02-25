#include "test_common.h"
#include "xorlinkedlist.h"
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>

void testCreateLinkedList ()
{
	LinkedList* underTest = createNode(999);
	assert(underTest);
	assert(999 == underTest->value);
}

void testPrevNextInLinkedList ()
{
	LinkedList* first = createNode(0);
	LinkedList* second = createNode(0);

	// initially we should get NULL for 
	// nextNode and prevNode, right?
	assert(NULL == nextNode(first));
	assert(NULL == prevNode(first));

	// now we should have something like: 
	// NULL <-> first <-> second <-> NULL
	insertNodeEnd(first, second); 
	//assert(NULL == prevNode(first));
	//assert(NULL == nextNode(second));
	//assert(second == nextNode(first));
	//assert(first == prevNode(second));
}

void testInsertNodeEnd ()
{
	LinkedList* first = createNode(0);
	LinkedList* second = createNode(0);

	// when we insert we expect the
	// the following first <-> second
	insertNodeEnd(first, second);

	assert(nextNode(first) == second);
	assert(prevNode(second) == first);
}

void testInsertNodeFront ()
{
	LinkedList* first = createNode(0);
	LinkedList* second = createNode(0);

	// when we insert we expect the
	// the following first <-> second
	insertNodeFront(second, first);

	assert(nextNode(first) == second);
	assert(prevNode(second) == first);
}

void testHelperFunctionBitwiseXOR ()
{
	assert(0b00 == (intptr_t) XOR((LinkedList*) 0b00, (LinkedList*) 0b00));
	assert(0b00 == (intptr_t) XOR((LinkedList*) 0b11, (LinkedList*) 0b11));
	assert(0b10 == (intptr_t) XOR((LinkedList*) 0b10, (LinkedList*) 0b00));
	assert(0b01 == (intptr_t) XOR((LinkedList*) 0b11, (LinkedList*) 0b10));
}

int main ()
{
	printf("Running tests now... \n");

	runTestCase(testCreateLinkedList);
	runTestCase(testPrevNextInLinkedList);
	runTestCase(testInsertNodeEnd);
	runTestCase(testInsertNodeFront);
	runTestCase(testHelperFunctionBitwiseXOR);

	return 0;
}

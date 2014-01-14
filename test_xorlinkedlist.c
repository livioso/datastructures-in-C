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

void testNextInLinkedList ()
{
	LinkedList* underTestA = createNode(1);
	LinkedList* underTestB = createNode(2);
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
	runTestCase(testInsertNodeEnd);
	runTestCase(testInsertNodeFront);
	runTestCase(testHelperFunctionBitwiseXOR);

	return 0;
}
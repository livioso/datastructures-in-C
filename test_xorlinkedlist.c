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

void testInsertNodeFront ()
{
	LinkedList* first = createNode(1);
	LinkedList* second = createNode(0);

	LinkedList* underTest = insertNodeFront(second, first);
	assert(underTest == first);

	printf("----> Debug -- first %#010x and second %#010x. first->next is %#010x \n", 
		(unsigned int) first, (unsigned int) second, (unsigned int) nextNode(first));
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
	runTestCase(testInsertNodeFront);
	runTestCase(testHelperFunctionBitwiseXOR);

	return 0;
}
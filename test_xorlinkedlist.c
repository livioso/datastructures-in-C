#include "test_common.h"
#include "xorlinkedlist.h"
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>

void testCreateLinkedList ()
{
	LinkedList* underTest = createNode(1);
	assert(underTest);
}

void testInsertNodeFront ()
{
	LinkedList* underTestCurrentHead = createNode(1);
	LinkedList* underTestNewHead = createNode(2);

	insertNodeFront(underTestCurrentHead, underTestNewHead);


	//assert(insertNodeFront);
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
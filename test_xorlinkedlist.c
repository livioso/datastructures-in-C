#include "test_common.h"
#include "xorlinkedlist.h"
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>

void testCreateLinkedList ()
{
	linkedListNode* underTest = createNode(1);
	assert(underTest);
}

void testHelperFunctionBitwiseXOR ()
{
	assert(0b00 == (intptr_t) XOR((linkedListNode*) 0b00, (linkedListNode*) 0b00));
	assert(0b00 == (intptr_t) XOR((linkedListNode*) 0b11, (linkedListNode*) 0b11));
	assert(0b10 == (intptr_t) XOR((linkedListNode*) 0b10, (linkedListNode*) 0b00));
	assert(0b01 == (intptr_t) XOR((linkedListNode*) 0b11, (linkedListNode*) 0b10));
}

int main ()
{
	printf("Running tests now... \n");

	runTestCase(testCreateLinkedList);
	runTestCase(testHelperFunctionBitwiseXOR);

	return 0;
}
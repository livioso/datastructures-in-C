#include "test_common.h"
#include "xorlinkedlist.h"
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

void testCreateLinkedList ()
{
	linkedListNode* underTest = createNode(1);
	assert(underTest);
}

void testHelperFunctionBitwiseXOR ()
{
	assert(0b00 == bitXOR(0b00, 0b00));
	assert(0b00 == bitXOR(0b11, 0b11));
	assert(0b10 == bitXOR(0b10, 0b00));
	assert(0b01 == bitXOR(0b11, 0b10));
}

int main ()
{
	printf("Running tests now... \n");

	runTestCase(testCreateLinkedList);
	runTestCase(testHelperFunctionBitwiseXOR);

	return 0;
}
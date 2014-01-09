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

int main ()
{
	printf("Running tests now... \n");

	runTestCase(testCreateLinkedList);

	return 0;
}
#include "xorlinkedlist.h"
#include <stdlib.h>
#include <stdio.h>

linkedListNode* createNode (int value)
{
	linkedListNode* node = NULL;
	node = (linkedListNode*) malloc(sizeof(linkedListNode));

	if(NULL == node) {
		printf("----> Debug -- Malloc failed! :-/");
		return node;
	}

	node->value = value;

	return node;
}

bool contains (linkedListNode* first, int value) 
{
	return false;
}

/* lhs	rhs		XOR
   ----------------
 	0	0	=>	0
 	1   0   =>	1
	0   1   =>	1
	1   1   =>	0	*/
unsigned int bitXOR (unsigned int lhs, unsigned int rhs)
{
	return 0;
}
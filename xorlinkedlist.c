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

/* see also the corresponding unit test */
unsigned int bitXOR (unsigned int lhs, unsigned int rhs)
{
	return lhs ^ rhs;
}
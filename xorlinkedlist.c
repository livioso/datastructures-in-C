#include "xorlinkedlist.h"
#include <stdlib.h>
#include <stdio.h>

LinkedList* createNode (int value)
{
	LinkedList* node = NULL;
	node = (LinkedList*) malloc(sizeof(LinkedList));

	if(NULL == node) {
		printf("----> Debug -- Malloc failed! :-/");
		return node;
	}

	node->value = value;
	node->prev_next = NULL;

	return node;
}

LinkedList* nextNode (LinkedList* nextOfNode)
{
	return XOR (nextOfNode, nextOfNode->prev_next);
}

LinkedList* prevNode (LinkedList* prevOfNode)
{
	return XOR (prevOfNode->prev_next, prevOfNode);;
}

LinkedList* insertNodeFront (LinkedList* currentHead, LinkedList* newHead)
{
	newHead->prev_next = XOR(NULL, currentHead);

	if(NULL != currentHead) {
		LinkedList* next = XOR(currentHead, NULL);
		currentHead->prev_next = XOR(newHead, next);
	}

	return newHead;
}

bool contains (LinkedList* first, int value) 
{
	return false;
}

/* see also the corresponding unit test */
LinkedList* XOR (LinkedList* lhs, LinkedList* rhs)
{
	printf("----> Debug -- XOR lhs is %#010x and rhs is %#010x.\n", 
		(unsigned int) lhs, (unsigned int) rhs);

	return (LinkedList*) ((intptr_t)lhs ^ (intptr_t)rhs);
}
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
	return NULL;
}

LinkedList* prevNode (LinkedList* prevOfNode)
{
	return NULL;
}

LinkedList* insertNodeFront (LinkedList* currentHead, LinkedList* newHead)
{
	//newHead->prev_next = (struct LinkedList*) XOR(currentHead, NULL);

	if(NULL != currentHead) {
		//struct LinkedList* next = (struct LinkedList*) XOR(currentHead->prev_next, NULL);
		//currentHead->prev_next = (struct LinkedList*) XOR(newHead, next);
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
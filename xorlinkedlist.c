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
	return XOR (NULL, nextOfNode->prev_next);
}

LinkedList* prevNode (LinkedList* prevOfNode)
{
	return XOR (prevOfNode->prev_next, NULL);
}

void insertNodeEnd (LinkedList* currentHead, LinkedList* newHead)
{
	// current head is previous of new head 
	newHead->prev_next = XOR(currentHead, NULL);

	if(NULL != currentHead) {
		// new head is next of the old head
		currentHead->prev_next = XOR(NULL, newHead);
	}

}

void insertNodeFront (LinkedList* currentHead, LinkedList* newHead)
{
	// we don't have previous node for head
	// but we have a next node (currentHead)
	newHead->prev_next = XOR(NULL, currentHead);

	if(NULL != currentHead) {
		// previous node of the old head is the new
		currentHead->prev_next = XOR(newHead, NULL);
	}
}

bool containsValue (LinkedList* first, int value) 
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
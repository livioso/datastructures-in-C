#include <stdbool.h>

typedef struct linkedList {
	int value;
	// stores next and previous node
	// so called XOR linked list ;-)
	struct LinkedList* prev_next;
} linkedListNode;

linkedListNode* createNode (int value);
bool contains (linkedListNode* first, int value);
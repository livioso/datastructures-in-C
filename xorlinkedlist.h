#include <stdbool.h>

typedef struct LinkedList {
	int value;
	// stores next and previous node
	// so called XOR linked list ;-)
	struct LinkedList* prev_next;
} LinkedList;

LinkedList* createNode (int value);
LinkedList* nextNode (LinkedList* nextOfNode);
LinkedList* prevNode (LinkedList* prevOfNode);

void insertNodeEnd (LinkedList* currentHead, LinkedList* newHead);
void insertNodeFront (LinkedList* currentHead, LinkedList* newHead);
bool containsValue (LinkedList* first, int value);

LinkedList* XOR (LinkedList* lhs, LinkedList* rhs);

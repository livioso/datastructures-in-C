#include "stdio.h"
#include "stdbool.h"
#include "assert.h"
#include "trie.h"

void testCreateTrie ()
{
	printf(" >> testCreateTrie \n");

	trieNode* underTest = createNode('a', 1);
	assert(underTest != NULL);
}

void testKeyValue ()
{
	printf(" >> testKeyValue \n");

	trieNode* underTest = createNode('a', 1);
	assert('a' == underTest->key);
	assert(1 == underTest->value);
}

void testAddNode ()
{
	printf(" >> testAddNode \n");

	trieNode* root = createNode('x', 1);
	addNode(root, 'y', 10);

	trieNode* addNode(trieNode* root, char key, int value);
	assert(0 == 1);
}

int main()
{
	printf("Running tests now... \n");

	testCreateTrie();
	testKeyValue();
	testAddNode();

	return 0;
}
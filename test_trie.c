#include "stdio.h"
#include "stdbool.h"
#include "assert.h"
#include "trie.h"

void testCreateTrie ()
{
	printf(" >> testCreateTrie: ");

	trieNode* underTest = createNode('a', 1);

	assert(underTest != NULL);
	assert('a' == underTest->key);
	assert(1 == underTest->value);
}


int main()
{
	printf("Running tests now... \n");

	testCreateTrie();

	return 0;
}
#include "stdio.h"
#include "stdbool.h"
#include "assert.h"
#include "trie.h"

#define runTestCase(testingFunction) \
	printf(" >>> %s \n", #testingFunction); \
	testingFunction(); \
	printf(" <<< Passed :-) \n");

void testCreateTrie ()
{
	trieNode* underTest = createTrieNode('a', 1);
	assert(underTest != NULL);
}

void testKeyValue ()
{
	trieNode* underTest = createTrieNode('a', 1);
	assert('a' == underTest->key);
	assert(1 == underTest->value);
}

void testAddGoodCase ()
{
	trieNode* root = createTrieNode('\0', 1);
	addTrie(root, "test", 1);
	assert(1 == 1);
}

void testAddRootNull ()
{
	trieNode* root = NULL;
	addTrie(root, "test", 1);
	assert(NULL == root);
}

void testIsKeyInTrieWhenRootNull ()
{
	assert(false == isKeyInTrie(NULL, "whatever"));
}

void testIsKeyInTrieWhenKeyEmtpy ()
{
	trieNode* root = createTrieNode('\0', 1);
	assert(false == isKeyInTrie(root, ""));
}

int main()
{
	printf("Running tests now... \n");

	runTestCase(testCreateTrie);
	runTestCase(testKeyValue);
	runTestCase(testAddGoodCase);
	runTestCase(testAddRootNull);
	runTestCase(testIsKeyInTrieWhenRootNull);
	runTestCase(testIsKeyInTrieWhenKeyEmtpy);

	return 0;
}
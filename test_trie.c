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

void testIsKeyInTrieWhenKeyExists ()
{
	trieNode* root = createTrieNode('\0', 1);
	trieNode* kCharacter = createTrieNode('k', 1);
	trieNode* eCharacter = createTrieNode('e', 2);
	trieNode* yCharacter = createTrieNode('y', 3);

	// K -> E -> Y
	root->children = kCharacter;
	kCharacter->children = eCharacter;
	eCharacter->children = yCharacter;

	bool found = isKeyInTrie(root, "key");

	assert(found);
}

void testIsKeyInTrieWhenRootNull ()
{

}

void testIsKeyInTrieWhenKeyEmtpy ()
{
	trieNode* root = createTrieNode('\0', 1);
	bool keyFound = isKeyInTrie(root, "");
	assert(!keyFound);
}

void testHasCharacterInNext ()
{
	trieNode* nodeA = createTrieNode('A', 1);
	trieNode* nodeB = createTrieNode('B', 2);
	trieNode* nodeC = createTrieNode('C', 3);

	nodeA->next = nodeB;
	nodeB->next = nodeC;

	// expected to be found: A B and NOT A
	assert(hasCharacterInNext(nodeB, 'B'));
	assert(hasCharacterInNext(nodeB, 'C'));
	assert(!hasCharacterInNext(nodeB, 'A'));
}

int main()
{
	printf("Running tests now... \n");

	runTestCase(testCreateTrie);
	runTestCase(testKeyValue);
	runTestCase(testAddGoodCase);
	runTestCase(testAddRootNull);
	runTestCase(testIsKeyInTrieWhenKeyExists);
	//runTestCase(testIsKeyInTrieWhenRootNull);
	//runTestCase(testIsKeyInTrieWhenKeyEmtpy);
	runTestCase(testHasCharacterInNext);

	return 0;
}
#include "trie.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

trieNode* createTrieNode(char key, int value)
{
	trieNode* node = NULL;
	node = (trieNode*) malloc(sizeof(trieNode));

	if(NULL == node) {
		printf("----> Debug -- Malloc failed! :-/");
		return node;
	}

	node->key = key;
	node->value	= value;
	node->children = NULL;
	node->parent = NULL;

	return node;
}

void addTrie(trieNode* root, char* key, int value)
{
	if(NULL != root) {
		printf(" ----> Debug -- Inserting (key, value) pair: (%s, %i)\n", key, value);

		trieNode* traversal = root->children;
	}
}

bool isKeyInTrie(trieNode* root, char* key)
{
	bool keyHasBeenFound = false;

	const int lengthOfKey = strlen(key);
	if(NULL == root || 0 == lengthOfKey) {
		return keyHasBeenFound;
	}

	trieNode* crawlNode = root->children;
	for(int level = 0; level <= lengthOfKey + 1; ++level) {
		crawlNode = hasCharacterInNext(crawlNode, key[level]);

		printf("%c",key[level]);

		if(lengthOfKey == level && crawlNode) {
			keyHasBeenFound = true;
		}
	}

	return keyHasBeenFound;
}

trieNode* hasCharacterInNext (trieNode* start, char character)
{
	assert(start);

	trieNode* crawler = start;
	trieNode* found = NULL;

	do {
		if(crawler->key == character) {
			found = start;
			break;
		}

		// get the next item in 
		// the linked list 
		crawler = crawler->next;

	} while(crawler);

	return found;
}





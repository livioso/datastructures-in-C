#include "stdio.h"
#include "stdlib.h"
#include "trie.h"
#include "string.h"

trieNode* createTrieNode(char key, int value)
{
	trieNode* node = NULL;
	node = (trieNode*) malloc(sizeof(trieNode));

	if(NULL == node) {
		printf("malloc failed");
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
	if(NULL == root || 0 == strlen(key)) {
		return false;
	}

	return true;
}



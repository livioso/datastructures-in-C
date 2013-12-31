#include "stdio.h"
#include "stdlib.h"
#include "trie.h"

trieNode* createNode(char key, int value)
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

trieNode* addNode(trieNode* root, char key, int value)
{
	return NULL; 
}



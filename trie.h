#include <stdbool.h>

typedef struct trie {
	char key;
	int value;
	struct trie* next;
	struct trie* prev;
	struct trie* children;
	struct trie* parent;
} trieNode;

trieNode* createTrieNode(char key, int value);
void addTrie(trieNode* root, char* key, int value);
bool isKeyInTrie(trieNode* root, char* key);
trieNode* hasCharacterInNext (trieNode* start, char character);

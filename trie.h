typedef struct trie {
	char key;
	int value;
	struct trie* next;
	struct trie* prev;
	struct trie* children;
	struct trie* parent;
} trieNode;

trieNode* createNode(char key, int value);
trieNode* addNode(trieNode* root, char key, int value);

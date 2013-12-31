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

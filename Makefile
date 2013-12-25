default: *.c *.h
	mkdir -p bin
	gcc -std=c99 -o bin/test_trie test_trie.c trie.c
	./bin/test_trie
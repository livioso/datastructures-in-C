default: *.c *.h
	mkdir -p bin
	gcc -std=c99 -Werror -o bin/test_trie trie.c test_trie.c
	./bin/test_trie
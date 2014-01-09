default: *.c *.h
	mkdir -p bin
	
	gcc -std=c99 -Werror -o bin/test_trie trie.c test_trie.c
	gcc -std=c99 -Werror -o bin/test_xorlinkedlist xorlinkedlist.c test_xorlinkedlist.c

	./bin/test_trie
	./bin/test_xorlinkedlist
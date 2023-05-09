CC = g++

CFLAGS = -I../../include -g -O2 -Wall

# LDFLAGS = -L./lib 

ALL: trie_tree

trie_tree: trie_tree.cc
	${CC} ${CFLAGS} $^ -o $@ ${LDFLAGS}



clean:
	rm -f trie_tree

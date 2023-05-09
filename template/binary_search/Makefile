CC = g++

CFLAGS = -I../../include -g -O2 -Wall

# LDFLAGS = -L./lib 

ALL: binary_search

binary_search: binary_search.cc
	${CC} ${CFLAGS} $^ -o $@ ${LDFLAGS}



clean:
	rm -f binary_search

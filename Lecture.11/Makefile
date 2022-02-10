CC = g++
C_FLAGS = -std=c++11 -Wall -g

OBJS = digraph_test.o digraph.o
BINS = digraph

digraph: digraph_test.o digraph.o
	$(CC) digraph_test.o digraph.o -o digraph

digraph_test.o: digraph_test.cpp digraph.h
	$(CC) $(C_FLAGS) -c digraph_test.cpp

digraph.o: digraph.cpp digraph.h
	$(CC) $(C_FLAGS) -c digraph.cpp

clean:
	-rm -rf $(BINS) $(OBJS)
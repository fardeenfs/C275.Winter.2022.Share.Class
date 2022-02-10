CC = g++
C_FLAGS = -std=c++11 -Wall -g

OBJS = digraph.o digraph_test.o digraph_builder.o
BINS = digraph builder

builder: digraph_builder.o digraph.o
	$(CC) digraph_builder.o digraph.o -o builder

digraph: digraph_test.o digraph.o
	$(CC) digraph_test.o digraph.o -o digraph

digraph_builder.o: digraph_builder.cpp digraph.h
	$(CC) $(C_FLAGS) -c digraph_builder.cpp

digraph_test.o: digraph_test.cpp digraph.h
	$(CC) $(C_FLAGS) -c digraph_test.cpp

digraph.o: digraph.cpp digraph.h
	$(CC) $(C_FLAGS) -c digraph.cpp

clean:
	-rm -rf $(BINS) $(OBJS)
CC=gcc
FLAGS=-Wall -g

all: my_graph my_graph.o my_mat.o

my_graph: my_graph.o my_mat.o
	$(CC) $(FLAGS) my_graph.o my_mat.o -o my_graph

my_graph.o: my_graph.c
	$(CC) $(FLAGS) -c my_graph.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

clean:
	rm -f *.o my_graph

CC=gcc
FLAGS=-Wall -g

all: my_graph.o my_mat.o


my_graph.o: my_graph.c my_mat.h
	$(CC) $(FLAGS) -fPIC -c my_graph.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -fPIC -c my_mat.c

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
/*
 * A header of linked list operation.
 */

#include <cstdio>

struct list_node {
	int value;
	list_node *next;
};

void insert(list_node **, int);
void remove(list_node **, int);
void print(list_node *);


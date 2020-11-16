#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void init(struct List* list)
{
}

struct Node* front(struct List* list)
{
	/* You should implemet here */
	/* If the list has more that one node, 
	 * return the pointer of the first node.
	 * Otherwise, return NULL
	 */
}

struct Node* back(struct List* list)
{
	/* You should implemet here */
	/* If the list has more that one node, 
	 * return the pointer of the last node.
	 * Otherwise, return NULL
	 */
}

int empty(struct List* list)
{
	/* You should implemet here */
	/* 
	 * If it is empty list, return 1,
	 * otherewise, return 0
	 */
}

int size(struct List* list)
{
	/* You should implemet here */
}

void insert(struct List* list, int pos, Data val)
{
	/* You should implemet here */
	/* 
	 * Example:
	 * list: 1 2 3 4 5 
	 * insert(&list, 2, 6)
	 * result: 1 2 6 3 4 5
	 */
	 
	 /*
	  * If pos >= size(&list),
	  * you should insert an element at the back.
	  * If pos < 0,
	  * you should insert an element at the front.
	  */
}

void erase(struct List* list, int pos)
{
	/* You should implemet here */
	/* If pos is invalid, return */
}

void push_front(struct List* list, Data val)
{
	/* You should implemet here */
}

void pop_front(struct List* list)
{
	/* You should implemet here */
	/* If size of list is 0, return */
}

void push_back(struct List* list, Data val)			
{
	/* You should implemet here */
}

void pop_back(struct List* list)					
{
	/* You should implemet here */
	/* If size of list is 0, return */
}

void clear(struct List* list)
{
}

struct Node* find(struct List* list, Data data)
{
	/* You should implemet here */
	/*
	 * If you find the given data, return the pointer of the node,
	 * otherwise, return NULL
	 */
}

void print(struct List* list)
{
}

void forward_sum(struct List* list, int n)
{
	/* Go forward and sum every n nodes */
}

void backward_sum(struct List* list, int n)				
{
	/* Go backward and sum every n nodes */
}
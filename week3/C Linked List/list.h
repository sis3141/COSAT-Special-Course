#ifndef LIST_H
#define LIST_H

typedef double Data; 

struct Node {
	Data data;
	struct Node* prev, *next;
};

struct List {
	struct Node* head, *tail;
};

void init(struct List* list);
struct Node* front(struct List* list);
struct Node* back(struct List* list);
int empty(struct List* list);
int size(struct List* list);
void insert(struct List* list, int pos, Data val);
void erase(struct List* list, int pos);
void push_front(struct List* list, Data val);
void pop_front(struct List* list);
void push_back(struct List* list, Data val);
void pop_back(struct List* list);
void clear(struct List* list);
struct Node* find(struct List* list, Data data);
void print(struct List* list);
void forward_sum(struct List* list, int n);
void backward_sum(struct List* list, int n);
#endif

#include "stdlib.h"
#include "stdio.h"

#define NIL 'N'

typedef struct Node{
    struct Node *prev,*next;
    char value;
} Node;

typedef struct {
    Node *head;
    int size;
} List;

List* construct();

void destroy(List* list);

void* print(List* list);

void pushback(List* list, char el);
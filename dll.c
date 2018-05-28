#include "dll.h"

Node* getTail(List* list){
    Node *p=list->head;
    for(int i =1;i<list->size;i++){
        p=p->next;
    }
    return p;
}

List* construct(){
    List *list = (List*) malloc(sizeof(List));
    list->size=0;
    list->head=(Node*)malloc(sizeof(Node));
    list->head->value=NIL;
    return list;
}
void destroy(List* list){
    free(list);
}

char* print(List* list){
    char *res= (char*)malloc((list->size)*(sizeof(char)));
    char *iter=res;
    Node *p=list->head;
    for(int i=0;i<list->size;i++){
        *iter= p->value;
        printf("%c",p->value);
        p=p->next;
        iter++;
    }
    printf("\n");
    return res;
}

void pushback(List* list, char el){
    Node *p = getTail(list);
    if(list->size>0) {
        Node *node = (Node *) malloc(sizeof(Node));

        node->value = el;

        p->next = node;
        node->prev = p;
    }
    else{
        p->value=el;
    }
    list->size++;
}


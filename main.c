#include <stdio.h>
#include "src/dll.h"

int main() {
    List* list = construct();

    pushback(list,'0');
    pushback(list,'1');
    pushback(list,'2');
    pushback(list,'3');
    printf("%d\n",size(list));

    popfront(list);

    pushfront(list, 'a');
    pushfront(list, 'b');
    pushfront(list, 'c');
    printf("%d\n",size(list));

    popback(list);
    printf("%d\n",size(list));


    popfront(list);

    printf("%d\n",size(list));
    print(list);

    destroy(list);

    print(list);

    return 0;
}
#include <stdio.h>
#include "dll.h"

int main() {
    List* list = construct();

    pushback(list,'0');
    pushback(list,'1');
    pushback(list,'2');
    pushback(list,'3');

    print(list);

    return 0;
}
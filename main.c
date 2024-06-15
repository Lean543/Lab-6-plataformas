#include <stdio.h>
#include "stack.h"

int main(){

    int stacksize = 0;

    int * ptrsize = &stacksize;

    stack* top = NULL;

    int data = 1;

    Push(&top, data, ptrsize);

    data = 2;

    Push(&top, data, ptrsize);

    data = 3;

    Push(&top, data, ptrsize);

    Pop(&top, ptrsize);

    Peek(&top);

    data = 9;

    Push(&top, data, ptrsize);

    printstack(&top);

    freelist(&top);

}
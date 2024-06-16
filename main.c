#include <stdio.h>
#include "stack.h"

int main(){

    int size = 0;

    int * ptrsize = &size;

    stack* base = NULL;

    //Tamaño de pila en el momento
    stacksize(ptrsize);

    //Inserta pila
    int data = 1;
    Push(&base, data, ptrsize);

    //Inserta pila
    data = 2;
    Push(&base, data, ptrsize);

    printstack(base);

    //Inserta pila
    data = 3;
    Push(&base, data, ptrsize);

    //Elimina top en ese momento
    Pop(&base, &size);

    //Tamaño de pila en el momento
    stacksize(ptrsize);

    //Ver top en ese momento
    Peek(base);

    //Inserta pila
    data = 9;
    Push(&base, data, ptrsize);

    printstack(base);

    //Elimina top en ese momento
    Pop(&base, &size);

    printstack(base);

    //Inserta pila
    data = 56;
    Push(&base, data, ptrsize);

    //Inserta pila
    data = 32;
    Push(&base, data, ptrsize);

    printstack(base);

    //Ver top en ese momento
    Peek(base);

    freestack(base);

}
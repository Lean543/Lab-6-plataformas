#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void stacksize(stack** top, int size){

    if (&size == 0){

        printf("Stack vacío");

        return;

    }

    printf("Tamaño stack: %d", size);

}

void Push(stack** top, int data, int * size){

    //Crea una nueva stack

    stack * newstack = (stack *)malloc(sizeof(stack));
    if (newstack == NULL){

        printf("Falló reservando memoria\n");

        return;

    }

    newstack->data = data;
    newstack->next = NULL;

    if (top == NULL) {   

        *top = newstack;

        size++;

        return;
    }

    stack* target = *top;

    target->next = newstack;

    *top = newstack;

    size++;

}

void Pop(stack** top, int * size){

    stack* target = *top;

    target = target->next;

    *top = target;

    free(target);

    size--;

}

void Peek(stack* top){

    int topdata = top->data;

    printf("La data del elemento en la cima del stack es %d\n", topdata);

}

void printstack(stack* top){

    stack* target = top;

    while(target->next != NULL){

        target->next = target;

        printf("%d", target->data);

    }

    printf("%d", target->data);

}

void freelist(stack* top){

    stack * target = top;

    stack * next;

    while(target != NULL){

        next = target->next;

        free(target);
        
        target = next;

    }

}
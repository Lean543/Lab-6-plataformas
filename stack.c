#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void stacksize(int* size){

    if (*size == 0){

        printf("Stack vacío\n");

        return;

    }

    printf("Tamaño stack: %d\n", *size);

}

void Push(stack** base, int data, int* size){

    //Crea una nueva stack

    stack * newtop = (stack *)malloc(sizeof(stack));

    if (newtop == NULL){

        printf("Falló reservando memoria\n");

        return;

    }

    newtop->data = data;
    newtop->next = NULL;

    if (*base == NULL) {   

        *base = newtop;

        *size += 1;

        return;
    }

    stack* target = *base;

    while(target->next != NULL){

        target = target->next;

    }

    target->next = newtop;

    *size += 1;

}

void Pop(stack** base, int* size){

    if (*size == 1 || *size == 0){

        printf("stack queda vacío, imposible hacer pop\n");

        return;

    }

    stack* target = *base;

    stack* target2 = *base;

    while((target2->next)->next != NULL){

        target2 = target2->next;

    }

    while(target->next != NULL){

        target = target->next;

    }

    target2->next = NULL;

    printf("Data top eliminado: %d\n", target->data);

    free(target);

    *size -= 1;

}

void Peek(stack* base){

    stack* target = base;

    while(target->next != NULL){

        target = target->next;

    }

    printf("La data del elemento en la cima del stack es %d\n", target->data);

}

void printstack(stack* base){

    stack* target = base;

    while(target->next != NULL){

        printf("%d\n", target->data);

        target = target->next;

    }

    printf("%d\n", target->data);

}

void freestack(stack* base){

    stack * target = base;

    stack * next;

    while(target != NULL){

        next = target->next;

        free(target);
        
        target = next;

    }


}
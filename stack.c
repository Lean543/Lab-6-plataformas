#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void Push(Pila** superior, int data){

    //Crea una nueva pila

    Pila * newPila = (Pila *)malloc(sizeof(Pila));
    if (newPila == NULL){

        printf("Falló reservando memoria\n");

        return;

    }

    newPila->data = data;
    newPila->next = NULL;

    if (*superior == NULL) {   

        *superior = newPila;

        return;
    }

    Pila* target = *superior;

    while (target->next != NULL){

        target = target->next

    }


    target->next = NewPila;

}

void Pop(Pila** superior){

    while (target->next != NULL){

        target = target->next

    }

    free(target)

    while (target->next != NULL){

        target = target->next

    }
}
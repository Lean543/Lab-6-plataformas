typedef struct Pila {

    int data;

    struct Node* next;

} Stack;

void Push(Pila** superior, int data);
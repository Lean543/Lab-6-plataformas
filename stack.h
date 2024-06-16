typedef struct stack {

    int data;

    struct stack* next;

} stack;

void stacksize(int* size);

void Push(stack** base, int data, int* size);

void Pop(stack** base, int* size);

void Peek(stack* base);

void printstack(stack* base);

void freestack(stack* base);

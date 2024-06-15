typedef struct stack {

    int data;

    struct stack* next;

} stack;

void Push(stack** top, int data, int size);

void Pop(stack** top, int size);

void Peek(stack* top);

void printstack(stack* top);
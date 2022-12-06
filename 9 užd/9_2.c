#include <stdio.h>

struct Stack{
    int *first;
    int size;
} typedef Stack;


void initStack(Stack *stack){
    (*stack).first = NULL;
    (*stack).size = 0;
}

void printStack(Stack *stack){
    int size = (*stack).size;
    for(int i = 0; i < size; i++){
        printf("%d ", ((*stack).first)[i]);
    }
    printf("\n");
}

int getStackSize(Stack *stack){
    return (*stack).size;
}

void push(Stack *stack, int value){
    (*stack).size++;
    (*stack).first = realloc((*stack).first, sizeof(int) * ((*stack).size));
    ((*stack).first)[(*stack).size-1] = value;

}

int top(Stack *stack){
    if((*stack).size == 0)
        return 0;
    return ((*stack).first)[(*stack).size - 1];
}

int pop(Stack *stack){
    if((*stack).size == 0)
        return 0;
    (*stack).size--;
    int value = ((*stack).first)[(*stack).size];
    return value;
}

void destroyStack(Stack *stack){
    int size = (*stack).size;
    free((*stack).first);
    (*stack).first = NULL;
    (*stack).size = 0;
}

int main(){
    Stack s;
    initStack(&s);
    printStack(&s);
    push(&s, 5);
    printStack(&s);
    push(&s, 7);
    printStack(&s);
    push(&s, 12);
    printStack(&s);
    printf("%d\n", top(&s));
    printStack(&s);
    printf("%d\n", pop(&s));
    printStack(&s);
    destroyStack(&s);
    printStack(&s);
    push(&s, 88);
    printStack(&s);
}

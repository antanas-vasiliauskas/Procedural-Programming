#include <stdio.h>
#include <assert.h>

typedef struct Point{
    double x, y;
} Point;

struct Stack{
    Point *first;
    int size;
} typedef Stack;



Point createPoint(double x, double y){
    Point p = {x,y};
    return p;
}


void initStack(Stack *stack){
    (*stack).first = NULL;
    (*stack).size = 0;
}

void printStack(Stack *stack){
    int size = (*stack).size;
    for(int i = 0; i < size; i++){
        printf("(%.2lf, %.2lf), %.2lf;  ", ((*stack).first)[i].x, ((*stack).first)[i].y, sqrt(pow(((*stack).first)[i].x, 2) + pow(((*stack).first)[i].y, 2) ));
    }
    printf("\n");
}

int getStackSize(Stack *stack){
    return (*stack).size;
}

void push(Stack *stack, Point value){
    (*stack).size++;
    (*stack).first = realloc((*stack).first, sizeof(Point) * ((*stack).size));
    ((*stack).first)[(*stack).size-1] = value;

}

Point top(Stack *stack){
    assert((*stack).size != 0);
    return ((*stack).first)[(*stack).size - 1];
}

Point pop(Stack *stack){
    assert((*stack).size != 0);
    (*stack).size--;
    Point value = ((*stack).first)[(*stack).size];
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
    push(&s, createPoint(3,4));
    push(&s, createPoint(5,-8));
    push(&s, createPoint(3,2));
    push(&s, createPoint(1,9));
    push(&s, createPoint(-5,7));
    printStack(&s);
}

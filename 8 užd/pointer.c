#include <stdio.h>

int main(){
    int *a = malloc(sizeof(int));
    int **b = &a;
    int *ptr = *b;


}

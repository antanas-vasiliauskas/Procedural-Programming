#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

int *getPermutation(int size);

int main(){
    srand(time(NULL));
    int *permutation = getPermutation(SIZE);
    
    for(int i = 0; i < SIZE; i++){
        printf("%d ", permutation[i]);
    }
    printf("\n");
    
}

int *getPermutation(int size){
    if(size == 1){
        int *p = malloc(sizeof(int));
        *p = 1;
        return p;
    }
    int *permutation = getPermutation(size-1);
    int index = rand() % size;
    permutation = (int*)realloc(permutation, size * sizeof(int));
    for(int i = size-1; i > index; i--){
        permutation[i] = permutation[i-1];
    }
    permutation[index] = size;
    return permutation;
}

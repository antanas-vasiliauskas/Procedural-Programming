#include <stdlib.h>
#include <time.h>

int* create_array(int size, int low, int high){
    int* arr = malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++){
        *(arr + i) = rand() % (high-low+1) + low;
    }
    return arr;
}

void print(int* arr, int size){
    for(int i = 0; i < size; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}


int main(){
    srand(time(NULL));
    int* arr = create_array(20, 100, 1000);
    print(arr, 20);
}



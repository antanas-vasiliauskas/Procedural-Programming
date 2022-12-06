#include <stdio.h>

int main(){
    int arr[20] = {0,1,2,5,7,5,5,7,9,8,5,6,4,11,98,1001,50,0,5,9};
    int* subarr1 = NULL;
    int* subarr2 = NULL;
    arr_split(arr, 20, 5, &subarr1, &subarr2);
    print(subarr1, 5);
    print(subarr2, 15);
}

int arr_split(int* arr, int size, int index, int** subarr1, int** subarr2){
    if(index >= size-1 || size < 1 || index < 0 || arr == NULL)
        return -1;
    *subarr1 = (int*) malloc(sizeof(int) * index);
    *subarr2 = (int*) malloc(sizeof(int) * (size-index));

    for(int i = 0; i < index; i++)
        *(((int*)*subarr1) + i) = *(arr+i);
    for(int i = index; i < size; i++)
        *(((int*)*subarr2)+i-index) = *(arr+i);
}

void print(int* arr, int size){
    for(int i = 0; i < size; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

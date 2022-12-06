#include <stdio.h>

int main(){
    int n = 0;
    printf("Iveskite n:\n");
    scanf("%d", &n);
    int *arr = NULL;
    arr = (int*)malloc(sizeof(int)*n);
    sukurk_masyva(arr, n);
    print(arr,n);
}


void sukurk_masyva(int *arr_ptr, int n){

    for(int i = 0; i < n; i++)
        arr_ptr[i] = (i+1)*(i+1);
}

void print(int* arr, int n){
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

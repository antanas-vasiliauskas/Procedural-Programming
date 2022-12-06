#include <stdio.h>

int main(){
    int a = 1, b = 2;
    printf("%d, %d\n", a, b);
    swap(&a, &b);
    printf("%d, %d\n", a, b);
}

void swap(int* first, int* second){
    int tmp = *second;
    *second = *first;
    *first = tmp;
}

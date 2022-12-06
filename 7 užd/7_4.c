#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int m[10];
    generate_array(m, 10, 5, 10000);
    print(m, 10);
    int g[50];
    generate_array(g, 50, 1, 10);
    print(g, 50);
}

void generate_array(int data[], int size, int low, int high){
    for(int i = 0; i < size; i++){
        data[i] = rand() % (high-low+1) + low;
    }
}

void print(int data[], int size){
    for(int i = 0; i < size; i++)
        printf("%d ", data[i]);
    printf("\n");
}

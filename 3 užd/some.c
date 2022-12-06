#include <stdio.h>

double arithmetic_average(int* seq, int size){
    double sum = 0;
    for(int i = 0; i < size; i++)
        sum = sum + seq[i];
    return sum/size;

}

int main(){
    int a[40] = {0};
    for(int i = 0; i < 40; i++)
        printf("%d\n", a[i]);
    //printf("%f", arithmetic_avarage(a, 5));
}



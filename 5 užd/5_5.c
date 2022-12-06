#include <stdio.h>

#define CAPACITY 1000

// index:  76543210
// number: 60506948

int get_digit(int n, int index){

}

int main(){
    printf("Si programa suranda ar skaiciaus x skaitmenu uztenka sudaryti visus skaicius is jusu ivestos sekos.\nSeka uzbaigti galite ivesdami neteigiama reiksme.\n");
    int x_count[10] = {0};
    int current_count[10] = {0};

    int x = 0;
    int size = 0;
    int m[CAPACITY] = {0};
    printf("Iveskite x reiksme:\n");
    scanf("%d", &x);
    char is_negative = 0;
    while(!is_negative){
        printf("Iveskite %d-taji sekos nari:\n", size+1);
        int temp = 0;
        scanf("%d", &temp);
        if(temp <= 0){
            is_negative = 1;
        }
        else{
            m[size] = temp;
            size++;
        }
    }



}

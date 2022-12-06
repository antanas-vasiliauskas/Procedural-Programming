#include <stdio.h>

#define CAPACITY 1000
#define PRIMES_CAPACITY 100000

int main(){
    printf("Si programa suranda pirminius skaicius is jusu ivestos sekos.\nSeka uzbaigti galite ivesdami neteigiama reiksme.\n");
    int size = 0;
    int m[CAPACITY] = {0};
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

    // Sugeneruojami pirminiai skaiciai.
    int cursor = 0;
    int primes[PRIMES_CAPACITY] = {0};
    primes[cursor++] = 2;

    for(int i = 3; cursor < PRIMES_CAPACITY; i+=2){
        char has_divisor = 0;
        for(int j = 0; j < cursor && primes[j]*primes[j] <= i; j++){
            if(i % primes[j] == 0){
                has_divisor = 1;
                break;
            }
        }
        if(!has_divisor)
            primes[cursor++] = i;
    }

    printf("Sekoje buvo sie pirminiai skaiciai:\n");

    for(int j = 0; j < PRIMES_CAPACITY; j++){
        for(int i = 0; i < size; i++){
            if(m[i] == primes[j]){
                printf("%d\n", m[i]);
                primes[j] = -1;
            }
        }
    }
}

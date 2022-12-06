#include <stdio.h>


int main(){
    int n = 0;
    printf("Iveskite sveika skaiciu:\n");
    scanf("%d", &n);
    printf("Surikiuotas skaicius: %d\n", bubble_sort(n));
}

int custom_round(double n){
    return (int)(n + 0.5 - (n<0));
}

// number: 20220918
// index:  87654321

int get_digit(int n, int i){
    return n % custom_round(pow(10, i)) / custom_round(pow(10, i-1));
}

int get_len(int n){
    return floor(log10(abs(n))) + 1;
}


int digit_swap(int n, int digit_index_1, int digit_index_2){
    int pow_1 = custom_round(pow(10, digit_index_1-1));
    int pow_2 = custom_round(pow(10, digit_index_2-1));
    int digit_1 = n % (pow_1*10) / pow_1;
    int digit_2 = n % (pow_2*10) / pow_2;

    n -= digit_1*pow_1;
    n += digit_2*pow_1;
    n -= digit_2*pow_2;
    n += digit_1*pow_2;

    return n;
}


int bubble_sort(int n){
    char is_negative = n < 0;
    n = abs(n);
    int len = get_len(n);
    char changed = 1;
    while(changed){
        changed = 0;
        for(int i = 1; i < len; i++){
            if(get_digit(n, i) > get_digit(n, i+1)){
                n = digit_swap(n, i, i+1);
                changed = 1;
            }
        }
    }
    return is_negative ? -n : n;
}

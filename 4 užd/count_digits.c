#include <stdio.h>

int count_digits(char* number, int len){
    // only positive. No verification done, is the number the right format.
    // returns -1 if format is not correct
    int digits = 0;
    char first_non_zero = 0;
    char floating_point_reached = 0;
    int zero_count = 0;
    for(int i = 0; i < len && number[i] != '\0'; i++){
        if(number[i] == '.'){
            if(floating_point_reached){
                return -1;
            }

            floating_point_reached = 1;
            if(!first_non_zero)
                digits = 1;
        }
        else{
            if(number[i] == '0'){
                if(!floating_point_reached){
                    if(first_non_zero){
                        digits++;
                    }
                    else{
                        // do nothing.
                    }
                }else{
                    // floating point is reached
                    zero_count++;
                }
            }
            else if(48 <= number[i] && number[i] <= 57){
                first_non_zero = 1;
                digits++;
                digits += zero_count;
                zero_count = 0;
            }
            else{
                return -1;
            }
        }
    }
    return digits;
}

int main(){
    printf("got: %d expected: 12\n", count_digits("0000000000.0000000000100000000\0\0\0\0", 30));
    printf("got: %d expected: 1\n", count_digits("0000000000.0000\0000000100000000\0\0\0\0", 30));
    printf("got: %d expected: 18\n", count_digits("0001000000.0000000000100000000", 30));
    printf("got: %d expected: 7\n", count_digits("0001000000", 10));
    printf("got: %d expected: 7\n", count_digits("-0001000000", 10));
}

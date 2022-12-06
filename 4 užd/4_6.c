#include <stdio.h>
/**
    Skaitmenu skaicius skaiciuojamas is trumpiausio skaiciaus uzrasimo formato nenaudojant eksponento:

   4 - 1 skaitmuo
   4.0 - 1 skaitmuo
   4. - 1 skaitmuo

   0.0004 - 5 skaitmenys
   .0004 - 5 skaitmenys
   0000000000000000.00040000000000000 - 5 skaitmenys


*/

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
    printf("Si programa is ivestu teigiamu skaiciu sekos, kurios pabaiga zymi pirma ivesta neteigiama reiksme,\nsuranda skaiciu, turinti daugiausiai skaitmenu.\n");
    char input[256];
    char* number_with_most_digits = (char*) malloc (256*sizeof(char));
    int max_digits = 0;
    for(int i = 0; i < 256; i++)
        number_with_most_digits[i] = '\0';
    number_with_most_digits[0] = '0';

    char is_input_correct = 0;
    char is_not_positive = 0;
    /// Įvesties ciklas
    while(is_not_positive == 0){
        is_input_correct = 1;
        printf("Iveskite sekanti skaiciu:\n");
        scanf("%s", &input);
        if(strlen(input) == 1 && input[0] == '0')
            is_not_positive = 1;
        else{
            char floating_point_reached = 0;
            for(int i = 0; i < 10 && input[i] != '\0'; i++){
                if(i == 0 && input[i] == '-'){
                    is_not_positive = 1;
                }

                if(!(isdigit(input[i]) || (input[i] == '-' && i == 0 ))){
                //if(!isdigit(input[i]) && (input[i] != '-' || i != 0) && (input[i] != '.' && floating_point_reached)){
                    if(input[i] == '.' && !floating_point_reached && strlen(input) > 1){
                        floating_point_reached = 1;
                    }
                    else{
                        is_input_correct = 0;
                        is_not_positive = 0;
                        break;
                    }
                }
            }
        }

        if(!is_input_correct){
            printf("Ivestis neteisinga.\n");
        }
        else{
            int digits = count_digits(input, strlen(input));
            if(digits > max_digits){
                max_digits = digits;
                strcpy(number_with_most_digits, input);
            }
        }
    }


    printf("Ilgiausias skaicius: %s turintis %d skaitmenis(-i)(-u)\n", number_with_most_digits, max_digits);

    return 0;
}

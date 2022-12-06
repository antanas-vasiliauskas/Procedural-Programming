/// Antanas Vasiliauskas Užduotis 11
#include <stdio.h>

int main(){
    int x0 = 1; /// Pirmas sekos narys
    char input[12];
    char run = 'y';

    while(run == 'y' || run == 'Y'){
        int is_input_correct = 0;
        /// Įvesties ciklas
        while(is_input_correct == 0){
            is_input_correct = 1;
            printf("Iveskite pirma sekos skaiciu:\n");
            scanf("%s", &input);

            /// Patikrinama ar įvestis neperžengia int ribų
            if(strlen(input) > 10){
                is_input_correct = 0;
            }

            /// Patikrinama ar įvestis yra skaičius
            for(int i = 0; i < 10 && input[i] != '\0'; i++){
                if(!isdigit(input[i])){
                    is_input_correct = 0;
                    break;
                }
            }

            x0 = atoi(input);

            /// Patikrinama ar įvestis yra skaičius didesnis už 0
            if(x0 < 1){
                is_input_correct = 0;
            }


            if(!is_input_correct){
                printf("Ivestis neteisinga.\n");
            }
        }


        while(x0 != 1){
            if(x0 % 2 == 0)
                x0 /= 2;
            else
                x0 = x0 * 3 + 1;
            printf("%d\n", x0);
        }
        printf("Ar norite pakartoti programa?\ny/N: ");
        scanf("%s", &run);
    }
    return 0;
}


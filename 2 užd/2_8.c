#include <stdio.h>

int map_char_value(char c){
    if(65 <= c && c <= 90) // A-Z
        return c-55;
    else if(97 <= c && c <= 122) //a-z
        return c-87;
    else if(48 <= c && c <= 57) // 0-9
        return c-48;
    else
        return -1;
}

char are_symbols_correct(char* symbols, int numeral_system){
    int size = strlen(symbols);
    for(int i = 0; i < size; i++){
        int value = map_char_value(symbols[i]);
        if(value == -1 || value >= numeral_system){
            printf("Simbolis %c yra negalimas %d-aineje skaiciu sistemoje!", symbols[i], numeral_system);
            return 0;
        }
    }
    return 1;
}

char* convert(char* input, int isystem, int osystem){
    int size = strlen(input);
    long long n = 0;
    for(int i = 0; i < size; i++){
        int value = map_char_value(input[i]);
        n+=value*pow(isystem, size-i-1);
    }
    char c[256];
    int index = 0;
    for(;;index++){
        int mod = n % osystem;
        n = n / osystem;
        c[index] = mod < 10 ? mod+48 : mod + 55;
        if(n == 0) break;
    }
    // If array is allocated in static memory, it gets deleted when function terminates.
    char* output = (char*)malloc((index+2) * sizeof(char));
    output[index+1] = '\0';
    for(int i = index;i >= 0;i--){
        output[index-i] = c[i];
    }
    return output;
}



int main(){
    int input_numeral_system = 10;
    int output_numeral_system = 2;

    // process input...
    printf("Iveskite ivesties skaiciu sistema is intervalo [1;36]:\n");
    scanf("%d", &input_numeral_system);
    if(input_numeral_system > 36){
        printf("Ivestis nera intervale [1;36]!\n");
        return 0;
    }
    printf("Iveskite isvesties skaiciu sistema is intervalo [1;36]:\n");
    scanf("%d", &output_numeral_system);
    if(output_numeral_system > 36){
        printf("Ivestis nera intervale [1;36]!\n");
        return 0;
    }
    printf("Iveskite reiksme %d-aineje skaiciu sistemoje:\n", input_numeral_system);
    char input[256];
    scanf("%255s", &input);
    if(!are_symbols_correct(input, input_numeral_system)){
        return 0;
    }

    printf("Skaiciuoja...\n");
    char* output = convert(input, input_numeral_system, output_numeral_system);
    printf("Si reiksme %d-aineje skaiciu sistemoje:\n%s", output_numeral_system, output);
    return 0;
}

#include <stdio.h>

int main(){
    char* title = "Skaiciuotuvas";
    char* options[] = {"1. Sudetis", "2. Atimtis", "3. Daugyba", "4. Dalyba"};
    char* msg = "Iveskite skaiciuotuvo operacijos numeri:";
    int n = show_menu(title, options, 4, msg);
    printf("%d\n", n);

}

int show_menu(char* menu_title, char* menu_options[], int menu_size, char* input_msg){
    int n = -1;

    do{
        printf("%s\n", menu_title);
        for(int i = 0; i < menu_size; i++)
            printf("%s\n", menu_options[i]);
        printf("%s\n", input_msg);
        fflush(stdin);
    }
    while(scanf("%d", &n) == 0 || n < 1 || n > menu_size);
}

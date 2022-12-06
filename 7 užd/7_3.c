#include <stdio.h>

int main(){
    printf("%d\n", get_positive_number("Iveskite teigiama sveika skaiciu"));
}

int get_positive_number(char* msg){
    int n = -1;

    do{
        fflush(stdin);
        printf("%s\n", msg);
    }
    while(scanf("%d", &n) == 0 || n < 0);
}

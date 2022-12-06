#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0;
    printf("Si programa atspausdina visus teigiamus sveikus skaicius is intervalo (a; b] kurie dalijasi is skaiciaus c su liekana 1.\n");
    printf("Iveskite sveika skaiciu a: \n");
    scanf("%d", &a);
    printf("Iveskite sveika  skaiciu b: \n");
    scanf("%d", &b);
    printf("Iveskite sveika neneigiama skaiciu c: \n");
    scanf("%d", &c);
    if(c == 0){
        printf("c reiksme negali buti lygi 0!\n");
        return 0;
    }
    printf("Rezultatai: \n");
    for(int i = a > 0 ? a : 1; i <= b; i++){
        if(i % c == 1)
            printf("%d\n", i);
    }
    return 0;
}

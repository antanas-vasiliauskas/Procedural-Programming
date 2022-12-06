#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0;
    printf("Iveskite 3 sveikuosius skaicius:\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Maksimali reiksme: %d\nMinimali reiksme: %d\n",
            a < b ? (c < b ? b : c) : (c < a ? a : c),
            a > b ? (c > b ? b : c) : (c > a ? a : c)
           );

    /*
    testas(1,1,1, 1,1);

    testas(2,1,1, 2,1);
    testas(1,2,1, 2,1);
    testas(1,1,2, 2,1);
    testas(2,1,2, 2,1);
    testas(2,2,1, 2,1);
    testas(1,2,2, 2,1);

    testas(1,2,3, 3,1);
    testas(1,3,2, 3,1);
    testas(2,1,3, 3,1);
    testas(2,3,1, 3,1);
    testas(3,1,2, 3,1);
    testas(3,2,1, 3,1);
    */
}

void testas(int a, int b, int c, int emax, int emin){
    printf("Test: a = %d, b = %d, c = %d, Expected: max = %d, min = %d, ", a, b, c, emax, emin);
    printf("Actual: max = %d, min = %d\n",
            a < b ? (c < b ? b : c) : (c < a ? a : c),
            a > b ? (c > b ? b : c) : (c > a ? a : c)
           );
}

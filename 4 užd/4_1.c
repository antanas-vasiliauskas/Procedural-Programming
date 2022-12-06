#include <stdio.h>


int main(){
    int a = 0, b = 0, c = 0;
    printf("Si programa isprendzia lygti ax^2+bx+c=0 su duotosiomis a, b ir c reiksmemis.\n");
    printf("Iveskite sveika skaiciu a: \n");
    scanf("%d", &a);
    if(a == 0){
        printf("a reiksme negali buti lygi 0!\n");
        return 0;
    }
    printf("Iveskite sveika skaiciu b: \n");
    scanf("%d", &b);
    printf("Iveskite sveika skaiciu c: \n");
    scanf("%d", &c);

    int d = (b*b) - (4*a*c);

    if(d < 0)
        printf("Lygtis sprendiniu neturi.\n");
    else if(d == 0){
        printf("Lygtis turi viena sprendini.\n");
        printf("x = %lf\n", ((double)(-b)) / ((double)(2*a)), 5);
    }
    else{
        printf("Lygtis turi du sprendinius.\n");
        printf("x1 = %lf\nx2 = %lf", (((double)(-b)) + sqrt((double)d) ) / ((double)(2*a)), (((double)(-b)) - sqrt((double)d) ) / ((double)(2*a)));
    }
    return 0;
}

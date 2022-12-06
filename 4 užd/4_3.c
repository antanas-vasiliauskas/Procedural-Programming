#include <stdio.h>

int main(){
    long long a = 0, b = 0, c = 0;
    printf("Si programa atspausdina fibonacio sekos c-taji skaiciu, kai nulinis sekos narys lygus a, o pirmas narys lygus b.\n");

    printf("Iveskite sveika skaiciu a: \n");
    scanf("%lld", &a);
    if(a < 0){
        printf("a reiksme negali buti neigiama!\n");
        return 0;
    }

    printf("Iveskite sveika  skaiciu b: \n");
    scanf("%lld", &b);
    if(b < 0){
        printf("b reiksme negali buti neigiama!\n");
        return 0;
    }

    printf("Iveskite sveika neneigiama skaiciu c: \n");
    scanf("%lld", &c);
    if(c < 0){
        printf("c reiksme negali buti neigiama!\n");
        return 0;
    }



    long long f1 = a;
    long long f2 = b;

    for(int i = 1; i < c; i++){
        long long tmp = f2+f1;
        f1 = f2;
        f2 = tmp;
    }
    printf("c-tasis sekos narys: %lld\n", f2);

    return 0;
}

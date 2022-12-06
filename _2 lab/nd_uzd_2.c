/// Uzduotis 10
#include <stdio.h>

#define CAPACITY 512

double polinomo_reiksme(int n, double* koeficientai, double x);
void skaityk(int* n, double* koeficientai, double* x);

// ax^4 + bx^3 + cx^2 + dx + e = ?

int main(){
    printf("Si programa atspausdina n-tojo laipsnio polinoma.\n");

    int n = 0;
    double koeficientai[CAPACITY] = {0};
    double x = 0;
    skaityk(&n, koeficientai, &x);


    /// suskaiciuojama polinomo reiksme su argumentu x
    double rez = polinomo_reiksme(n, koeficientai, x);
    printf("Polinomo reiksme: %lf\n", rez);

    return 0;
}

void skaityk(int* n, double* koeficientai, double* x){
    printf("Iveskite sveika teigiama skaiciu n:\n");
    scanf("%d", n);

    /// polinomo koeficientu ir argumento ivestis
    for(int i = (*n); i >= 0; i--){
        printf("Iveskite %d-ojo laipsnio polinomo nario koeficienta:\n", i);
        scanf("%lf", koeficientai+i);
        fflush(stdin);
    }
    printf("Iveskite polinomo argumenta x:\n");
    scanf("%lf", x);
}

double polinomo_reiksme(int n, double* koeficientai, double x){
    double rez = 0;
    for(int i = n; i >= 0; i--){
        rez += pow(x, i) * koeficientai[i];
    }
    return rez;
}

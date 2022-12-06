#include <stdio.h>


int gcd(int a, int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b){
    return ((a * b) / gcd(a, b)) ;
}


int main(){
    int a = 0, b = 0, c = 0;
    printf("Si programa apskaiciuos ivestu skaiciu a, b ir c DBD ir MBK.\n");

    printf("Iveskite sveika teigiama skaiciu a: \n");
    scanf("%d", &a);
    if(a <= 0){
        printf("a reiksme turi buti teigiama!\n");
        return 0;
    }

    printf("Iveskite sveika teigiama skaiciu b: \n");
    scanf("%d", &b);
    if(b <= 0){
        printf("b reiksme turi buti teigiama!\n");
        return 0;
    }

    printf("Iveskite sveika teigiama skaiciu c: \n");
    scanf("%d", &c);
    if(c <= 0){
        printf("c reiksme turi buti teigiama!\n");
        return 0;
    }

    // DBD IR MBK
    int dbd = gcd(a, gcd(b,c));
    int mbk = lcm(a, lcm(b,c));

    printf("Rezultatai:\nDBD: %d\nMBK: %d\n", dbd, mbk);

    return 0;
}

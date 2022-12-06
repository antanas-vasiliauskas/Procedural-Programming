#include <stdio.h>

int main(){
    printf("Iveskite sveikaji skaiciu:\n");
    int n = 0;
    scanf("%d", &n);
    printf("%s", n % 2 == 0 ? "Ivestas skaicius yra lyginis." : "Ivestas skaicius yra nelyginis.");
    return 0;
}

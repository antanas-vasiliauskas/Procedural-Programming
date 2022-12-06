#include <stdio.h>

#define CAPACITY 1000
int main(){
    int m[CAPACITY] = {0};
    int s = 0, n = 0;
    printf("Iveskite s reiksme:\n");
    scanf("%d", &s);
    printf("Iveskite n reiksme [1; %d]:\n", CAPACITY);
    scanf("%d", &n);
    if(1 > n || n > CAPACITY){
        printf("n reiksme nepatenka i rezius!\n");
        return 0;
    }
    for(int i = 0; i < n; i++){
        char input_correct = 0;
        while(!input_correct){
            printf("Iveskite %d-itaji masyvo elementa:\n", i+1);
            scanf("%d", &m[i]);
            if(m[i] < 1){
                printf("Masyvo elemento turi buti teigiama!\n");
            }

            else{
                input_correct = 1;
            }
            fflush(stdin);
        }
    }
    printf("Rezultatai:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j)
                continue;
            if(m[i]*m[j] == s){
                printf("(%d, %d)\n", m[i], m[j]);
            }
        }
    }
}

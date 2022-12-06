#include <stdlib.h>
#include <time.h>

#define CAPACITY 1000

int main(){
    srand(time(NULL));
    int m[CAPACITY] = {0};
    int a = 0, b = 0, c = 0;
    printf("Si programa sugeneruoja c elementu is intervalo [a; b]\n");
    printf("Iveskite a reiksme:\n");
    scanf("%d", &a);
    printf("Iveskite b reiksme:\n");
    scanf("%d", &b);
    if(a > b){
        printf("a negali buti didesnis uz b!\n");
        return 0;
    }
    printf("Iveskite c reiksme [1; %d]:\n", CAPACITY);
    scanf("%d", &c);
    if(1 > c || c > CAPACITY){
        printf("c reiksme iseina is reziu!\n");
        return 0;
    }
    for(int i = 0; i < c; ++i){
        // interval [0; 999 999 999]
        int random_large = (rand()%1000) * 1 + (rand()%1000) * 1000 + (rand()%1000) * 1000000;
        m[i] = a + random_large % (b-a+1);
        printf("%d\n", m[i]);
    }
}

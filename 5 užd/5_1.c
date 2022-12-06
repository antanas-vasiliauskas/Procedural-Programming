#include <stdio.h>

#define CAPACITY 10

int main(){

    int m[CAPACITY] = {0};
    int size = CAPACITY;
    for(int i = 0; i < size; ++i)
        printf("%d", m[i]);
    printf("\n");
    m[0] = 1;
    m[3] = 2;
    m[9] = 3;
    for(int i = 2; i < size - 1; ++i)
        m[i] = m[i+1];
    --size;


    ++size;
    for(int i = size; i >= 6; --i)
        m[i] = m[i-1];
    m[6] = 4;
    for(int i = 0; i < size; ++i)
        printf("%d", m[i]);
    printf("\n");
    int x = 0, y = 0;
    printf("Iveskite masyvo elemento indeksa x [0; %d], kuriam bus priskirta nauja reiksme:\n", size-1);
    scanf("%d", &x);
    if(0 > x || x > size-1){
        printf("Virsiti masyvo reziai!\n");
        return 0;
    }
    printf("Iveskite masyvo reiksme y:\n");
    scanf("%d", &y);
    m[x] = y;


    printf("Iveskite masyvo elemento indeksa x [0; %d], kuris bus istrintas:\n", size-1);
    scanf("%d", &x);
    if(0 > x || x > size-1){
        printf("Virsiti masyvo reziai!\n");
        return 0;
    }
    for(int i = x; i < size - 1; ++i)
        m[i] = m[i+1];
    --size;


    ++size;
    printf("Iveskite indeksa x [0; %d], kuriame bus iterptas naujas masyvo elementas:\n", size-1);
    scanf("%d", &x);
    if(0 > x || x > size-1){
        printf("Virsiti masyvo reziai!\n");
        return 0;
    }
    printf("Iveskite masyvo reiksme y:\n");
    scanf("%d", &y);


    for(int i = size; i >= x; --i)
        m[i] = m[i-1];
    m[x] = y;


    for(int i = 0; i < size; ++i)
        printf("%d", m[i]);
    printf("\n");
}

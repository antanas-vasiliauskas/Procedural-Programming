#include <stdio.h>
#define SIZE 10
struct Struktura{
    int n;
    int arr_static[1000];
    int *arr_dynamic;
} typedef Struktura;

void square_struct(Struktura sena){
    for(int i = 0; i < sena.n; i++){
        sena.arr_static[i] = sena.arr_static[i]*sena.arr_static[i];
        sena.arr_dynamic[i] = sena.arr_dynamic[i]*sena.arr_dynamic[i];
    }
}

int main(){
    Struktura s;
    s.n = SIZE;
    s.arr_dynamic = (int*)malloc(sizeof(int) * SIZE);

    for(int i = 0; i < s.n; i++){
        s.arr_static[i] = i+1;
        s.arr_dynamic[i] = i+1;
    }

    for(int i = 0; i < s.n; i++)
        printf("%d ", s.arr_static[i]);
    printf("\n");

    for(int i = 0; i < s.n; i++)
        printf("%d ", s.arr_dynamic[i]);
    printf("\n");

    square_struct(s);

    for(int i = 0; i < s.n; i++)
        printf("%d ", s.arr_static[i]);
    printf("\n");

    for(int i = 0; i < s.n; i++)
        printf("%d ", s.arr_dynamic[i]);
    printf("\n");
    free(s.arr_dynamic);
}





/*


*/

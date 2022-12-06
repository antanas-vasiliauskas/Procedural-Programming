#include <stdlib.h>
#define CAPACITY 256

int count = 0;
int *start[CAPACITY];
size_t len[CAPACITY];

void *my_malloc(size_t size){
    void *ptr = malloc(size);
    if(ptr == NULL)
        return NULL;
    start[count] = ptr;
    len[count] = size;
    count++;
    return ptr;
}

void *my_calloc(size_t nitems, size_t size){
    void *ptr = calloc(nitems, size);
    if(ptr == NULL)
        return NULL;
    start[count] = ptr;
    len[count] = size*nitems;
    count++;
    return ptr;
}

void *my_realloc(void *optr, size_t size){
    int index = -1;
    for(int i = 0; i < count; i++)
        if(start[i] == optr)
            index = i;

    if(index == -1)
        return NULL;

    void *nptr = realloc(optr, size);
    if(nptr == NULL)
        return NULL;

    if(size < 1){
        count--;
        for(int i = index; i < count; i++){
            start[i] = start[i+1];
            len[i] = len[i+1];
        }
    }
    else{
        start[index] = nptr;
        len[index] = size;
    }

}

void my_free(void *ptr){
    my_realloc(ptr, 0);
}

int get_malloc_size(){
    int size = 0;
    for(int i = 0; i < count; i++)
        size += len[i];
    return size;
}

void free_all(){
    for(int i = count; i >= 0; i--)
        my_free(start[i]);
}

void defragment_memory(){
    // ?
}

int main(){
    int *a = my_malloc(sizeof(int)*5);
    int *b = my_calloc(10, sizeof(int));
    print(a, 5);
    print(b, 10);
    printf("%p\n", a);
    printf("%p\n", b);
    printf("%d\n", get_malloc_size());
    int *newb = my_realloc(b, sizeof(int)*20);
    printf("\n");
    print(a, 5);
    print(newb, 20);
    printf("%p\n", a);
    printf("%p\n", newb);
    printf("%d\n", get_malloc_size());
    int *newa = my_realloc(a, sizeof(int)*50);
    printf("\n");
    print(newa, 50);
    print(newb, 20);
    printf("%p\n", newa);
    printf("%p\n", newb);
    printf("%d\n", get_malloc_size());
}

void print(int* arr, int size){
    for(int i = 0; i < size; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}


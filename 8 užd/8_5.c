#include <stdio.h>

char*** create(int w, int h){
    char*** arr;
    arr = calloc(w, sizeof(*arr));
    for(int i = 0; i < w; i++){
        arr[i] = calloc(h, sizeof(**arr));
    }
    return arr;
}

void write(char*** arr, char* str, int i, int j){
    int len = strlen(str);
    arr[i][j] = malloc(sizeof(char)*len);
    for(int k = 0; k < len; k++)
        *(arr[i][j] + k) = str[k];
}

char* read(char*** arr, int i, int j){
    return arr[i][j];
}

void deletee(char*** arr, int w, int h){
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
}

int main(){
    int w = 5, h = 5;
    char*** arr = create(w,h);
    write(arr, "Hello, world!", 2, 3);
    printf("%s\n", read(arr, 2, 3));
    deletee(arr, w, h);
    printf("%s\n", read(arr, 2, 3));
}



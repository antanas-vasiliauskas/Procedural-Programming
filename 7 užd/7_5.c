#include <stdio.h>

int main(){
    printf("%d\n", get_file_size("a.txt"));
    printf("%d\n", get_file_size("b.txt"));
    printf("%d\n", get_file_size("c.txt"));
}

int get_file_size(char* file_name){
    FILE* fp = fopen(file_name, "rb");
    if(fp == NULL)
        return -1;
    fseek(fp, 0, SEEK_END);
    int res = ftell(fp);
    fclose(fp);
    return res;
}

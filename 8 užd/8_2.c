#include <stdio.h>

char* largestFile(int count, char* filenames[]){
    int max_size = 0, index = -1;
    for(int i = 0; i < count; i++){
        FILE* f = fopen(filenames[i], "r");
        if(f == NULL)
            continue;
        fseek(f, 0, SEEK_END);
        int size = ftell(f);
        if(size > max_size)
            max_size = size, index = i;
    }
    if(index == -1)
        return "none of the provided files exists.";
    else
        return filenames[index];
}

int main(int argc, char *argv[]){
    printf("%s\n", largestFile(argc-1, &argv[1]));
}

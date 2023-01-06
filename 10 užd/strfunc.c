#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>

size_t my_strcspn (const char * str1, const char * str2 );
char *my_strstr(const char *haystack, const char *needle);
void *my_memcpy(void *dest, const void * src, size_t n);
char *my_strpbrk(const char *str1, const char *str2);
char *my_strtok(char *str, const char *delim);

int main(){
    
    char* first = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnoqprstuvwxyz0123456789";
    char* second = "abc";
    char* third = "123";
    char fourth[0];

    // STRCSPN
    assert(my_strcspn(first, second) == strcspn(first, second));
    assert(my_strcspn(first, third) == strcspn(first, third));
    assert(my_strcspn(second, third) == strcspn(second, third));
    assert(my_strcspn(second, second) == strcspn(second, second));
    assert(my_strcspn(first, fourth) == strcspn(first, fourth));

    //STRSTR
    assert(my_strstr(first, second) == strstr(first, second));
    assert(my_strstr(first, third) == strstr(first, third));
    assert(my_strstr(second, third) == strstr(second, third));
    assert(my_strstr(second, second) == strstr(second, second));
    assert(my_strstr(first, fourth) == strstr(first, fourth));

    // MEMCPY
    char fifth[50] = "Hello world";
    char sixth[50] = {0};
    my_memcpy(sixth, fifth, 50);
    assert(strcmp(fifth, sixth) == 0);


    // STRPBRK
    assert(my_strpbrk(first, second) == strpbrk(first, second));
    assert(my_strpbrk(first, third) == strpbrk(first, third));
    assert(my_strpbrk(second, third) == strpbrk(second, third));
    assert(my_strpbrk(second, second) == strpbrk(second, second));
    assert(my_strpbrk(first, fourth) == strpbrk(first, fourth));

    // STRTOK
    char str[80] = "This is - www.tutorialspoint.com - website";
    const char s[2] = "-";
    char *token = my_strtok(str, s);

    while( token != NULL ) {
        printf( " %s\n", token);
        token = my_strtok(NULL, s);
    }
}

char *my_strstr(const char *haystack, const char *needle){
    int i = 0;
    do{
        int j = 0;
        while(haystack[j+i] == needle[j]){
            if(needle[++j] == '\0'){
                return (char *) haystack+i;
            }
        }
    }while(haystack[i++] != '\0');
    return NULL;
}

void *my_memcpy(void *dest, const void * src, size_t n){
    void *ptr = (void*) src;
    for(int i = 0; i < n; i++){
        ((char*)dest)[i] = ((char*)src)[i]; 
    }
    return dest;
}

size_t my_strcspn (const char * str1, const char * str2 ){
    size_t n = 0;
    int i = 0, j = 0;
    do{
        j = 0;
        do{
            if(str1[i] == str2[j]){
                return n;
            }
        } while(str2[j++] != '\0');
        n++;
    } while(str1[i++] != '\0');
    return n;
}

char *my_strpbrk(const char *str1, const char *str2){
    int i = 0;
    do{
        int j = 0;
        do{
            if(str1[i] == str2[j]){
                return (char*)(str1+i);
            }
        } while(str2[++j] != '\0');
    } while(str1[++i] != '\0');
    return NULL;
}

char* next_src = NULL;
char *my_strtok(char *str, const char *delim){
    int i = -1;
    char *start = NULL;

    if(str == NULL)
        str = next_src;
    
    if(str == NULL)
        return NULL;

    while(str[++i] != '\0'){
        int j = -1;
        while(delim[++j] != '\0'){
            if(str[i] == delim[j]){
                if(start != NULL){
                    str[i] = '\0';
                    next_src = str+i+1;
                    return start;
                }
                continue;
            }
            if(start == NULL)
                start = str+i;
        }
    }
    if(str[i] == '\0' && start != NULL){
        next_src = NULL;
        return start;
    }
    return NULL;
}



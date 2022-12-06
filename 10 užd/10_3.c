#include <stdio.h>
#include <assert.h>


char* mystrncpy(char* destination, const char* source, size_t n){
    int cursor = -1;
    while(source[++cursor] != 0 && cursor < n)
        destination[cursor] = source[cursor];
    destination[cursor] = 0;
    return destination;
}

void test_mystrncpy(){
    char destination[50];
    assert(!strcmp(mystrncpy(destination, "abc", 3), destination));
    assert(!strcmp(mystrncpy(destination, "hello world", 4), destination));

    assert(!strcmp(mystrncpy(destination, "abc", 4), "abc"));
    assert(!strcmp(mystrncpy(destination, "abc", 3), "abc"));
    assert(!strcmp(mystrncpy(destination, "abc", 2), "ab"));

    assert(!strcmp(mystrncpy(destination, "hello world", 4), "hell"));
    assert(!strcmp(mystrncpy(destination, "" , 1), ""));

    assert(!strcmp(mystrncpy(destination, "abc", 3), strncpy(destination, "abc", 3)));
    assert(!strcmp(mystrncpy(destination, "abc", 2), strncpy(destination, "abc", 2)));
    assert(!strcmp(mystrncpy(destination, "hello world", 4),strncpy(destination, "hello world", 4)));
    assert(!strcmp(mystrncpy(destination, "" , 1), strncpy(destination, "" , 1)));

    char source1[] = "abc", source2[20] = "hello world", source3[] = "", source4[0];
    assert(!strcmp(mystrncpy(destination, source1, 3), source1));
    assert(strcmp(mystrncpy(destination, source1, 2), source1));
    assert(strcmp(mystrncpy(destination, source2, 4), source2));
    assert(!strcmp(mystrncpy(destination, source4, 0), source4));
}

int main(){
    test_mystrncpy();
}

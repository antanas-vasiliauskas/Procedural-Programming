#include <stdio.h>
#include <assert.h>


char* mystrcpy(char* destination, const char* source){
    int cursor = -1;
    while(source[++cursor] != 0)
        destination[cursor] = source[cursor];
    destination[cursor] = source[cursor];
    return destination;
}

void test_mystrcpy(){
    char destination[50];

    assert(!strcmp(mystrcpy(destination, "abc"), destination));
    assert(!strcmp(mystrcpy(destination, "abc"), destination));

    assert(!strcmp(mystrcpy(destination, "hello world"), "hello world"));
    assert(!strcmp(mystrcpy(destination, "hello world"), "hello world"));
    assert(!strcmp(mystrcpy(destination, ""), ""));

    assert(!strcmp(mystrcpy(destination, "abc"), strcpy(destination, "abc")));
    assert(!strcmp(mystrcpy(destination, "hello world"), strcpy(destination, "hello world")));
    assert(!strcmp(mystrcpy(destination, ""), strcpy(destination, "")));

    char source1[] = "abc", source2[20] = "hello world", source3[] = "", source4[0];
    assert(!strcmp(mystrcpy(destination, source1), source1));
    assert(!strcmp(mystrcpy(destination, source2), source2));
    assert(!strcmp(mystrcpy(destination, source3), source3));
    assert(!strcmp(mystrcpy(destination, source4), source4));
}

int main(){
    test_mystrcpy();
}

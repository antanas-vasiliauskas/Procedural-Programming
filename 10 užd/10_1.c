#include <stdio.h>
#include <assert.h>

size_t mystrlen(char *str){
    size_t count = -1;
    while(str[++count] != 0){}
    return count;
}

void test_mystrlen(){
    assert(mystrlen("string") == mystrlen("string"));
    assert(mystrlen("hello world") == mystrlen("hello world"));
    assert(mystrlen("") == mystrlen(""));
}

int main(){
    test_mystrlen();
}

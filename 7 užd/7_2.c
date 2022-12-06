#include <stdio.h>

int main(){
    printf("%d\n", get_factorial(-5)); // 0
    printf("%d\n", get_factorial(-1)); // 0
    printf("%d\n", get_factorial(0));  // 1
    printf("%d\n", get_factorial(1));  // 1
    printf("%d\n", get_factorial(2));  // 2
    printf("%d\n", get_factorial(4));  // 24
    printf("%d\n", get_factorial(8));  // 40320
    printf("%d\n", get_factorial(12)); // 479001600

    printf("\n");

    printf("%d\n", get_factorial_no_recursion(-5)); // 0
    printf("%d\n", get_factorial_no_recursion(-1)); // 0
    printf("%d\n", get_factorial_no_recursion(0));  // 1
    printf("%d\n", get_factorial_no_recursion(1));  // 1
    printf("%d\n", get_factorial_no_recursion(2));  // 2
    printf("%d\n", get_factorial_no_recursion(4));  // 24
    printf("%d\n", get_factorial_no_recursion(8));  // 40320
    printf("%d\n", get_factorial_no_recursion(12)); // 479001600
}

int get_factorial(int number){
    if(number < 0)
        return 0;
    if(number < 2)
        return 1;
    return number * get_factorial(number-1);
}

int get_factorial_no_recursion(int number){
    if(number < 0)
        return 0;
    int factorial = 1;
    for(int i = 2; i <= number; i++)
        factorial *= i;
    return factorial;
}

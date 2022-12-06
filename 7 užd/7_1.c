#include <stdio.h>

int main(){
    printf("%d\n", is_in_range(100, 100, 200)); // 1
    printf("%d\n", is_in_range(200, 100, 200)); // 1
    printf("%d\n", is_in_range(99, 100, 200));  // 0
    printf("%d\n", is_in_range(201, 100, 200)); // 0
    printf("%d\n", is_in_range(150, 100, 200)); // 1
    printf("%d\n", is_in_range(150, 200, 100)); // 0
}

 int is_in_range(int number, int low, int high){
    if(low > high)
        return 0;

    if(low <= number && number <= high)
        return 1;
    else
        return 0;
 }

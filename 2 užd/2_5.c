#include <stdio.h>
#include <math.h>

int main(){
    double x = 0, y = 0, z = 0;
    printf("Iveskite realiuosius skaicius x, y ir z:\n");
    scanf("%lf%lf%lf", &x, &y, &z);
    double result_a = x + 4 * y + pow(z, 3);
    double result_b = (x + pow(y, 0.5)) * (pow(z, 4) - abs(z)+46.3);
    printf("%f\n%f\n", result_a, result_b);
}

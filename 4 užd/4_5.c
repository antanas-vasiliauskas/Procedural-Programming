#include <stdio.h>

int main(){
    int n = 0;
    printf("Si programa apskaicuoja ivestu n skaiciu suma, vidurki, min ir max reiksmes.\n");

    printf("Iveskite skaiciu n: \n");
    scanf("%d", &n);
    if(n <= 0){
        printf("n reiksme turi buti teigiama!\n");
        return 0;
    }

    float sum = 0, _min = 1e8, _max = -1e8, average = 0;
    for(int i = 0; i < n; i++){
        float tmp = 0;
        printf("Iveskite %d-aji skaiciu:\n", i+1);
        scanf("%f", &tmp);
        sum += tmp;
        if(tmp < _min)
            _min = tmp;
        if(tmp > _max)
            _max = tmp;
    }
    average = sum/n;
    printf("Rezultatai:\nSkaiciu suma: %f\nSkaiciu vidurkis: %f\nMax reiksme: %f\nMin reiksme: %f\n", sum, average, _max, _min);

    return 0;
}

#include <stdio.h>

int main(void){
    float wspeed;
    printf("Enter wind speed in knots: ");
    scanf("%f", &wspeed);

    if (wspeed < 1){
        printf("Calm wind\n");
    }
    else if (wspeed >= 1 && wspeed <= 3){
        printf("Light air wind\n");
    }
    else if (wspeed >= 4 && wspeed <= 27){
        printf("Breeze wind\n");
    }
    else if (wspeed >= 28 && wspeed <= 47){
        printf("Gale wind\n");
    }
    else if (wspeed >= 48 && wspeed <= 63){
        printf("Storm wind\n");
    }
    else {
        printf("Hurricane wind\n");
    }
    return 0;
}
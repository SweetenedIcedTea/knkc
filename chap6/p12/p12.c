#include <stdio.h>

int fact(int n){
    int fact, facttrack;

    fact = 1;
    facttrack = 1;
    while (n--){
        if (n < 0){
            break;
        }
        fact = fact * facttrack;
        facttrack++;
    }
    return fact;
}

int main(void){
    int counter;
    double value, temp, eps;

    printf("Enter decimal point to approx e to step size: ");
    scanf("%lf", &eps);

    value = 0;
    printf("Step size: %lf \n", eps);

    for (int i = 0; ; i++){
        temp = 1.0 / fact(i);
        printf("%f %f\n", eps, temp);
        if (temp < eps) {
            break;
        }
        value += temp;
    }

    printf("Approx e: %f", value);
    return 0;
}
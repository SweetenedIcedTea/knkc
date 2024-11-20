#include <stdio.h>

int main(void){
    double x;
    printf("Input x value: ");
    scanf("%lf", &x);
    printf("%lf\n", ((((3.0*x + 2.0)*x - 5.0)*x - 1.0)*x + 7.0)*x - 6);
    return 0;
}
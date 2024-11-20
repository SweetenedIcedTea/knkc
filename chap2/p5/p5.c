#include <stdio.h>

double expo(double x, int n){
    int i;
    double res = 1.0;
    for (i = 1; i <= n; i++){
        res = res * x;
    }
    return res;

}

int main(void){
    double x, res;
    printf("Input x: ");
    scanf("%lf", &x);
    printf("%lf\n", 3.0 * expo(x, 5) + 2 * expo(x, 4) - 5 * expo(x, 3) - expo(x, 2) + 7 * x - 6);
    return 0;
}
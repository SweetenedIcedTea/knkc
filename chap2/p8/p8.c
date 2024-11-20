#include <stdio.h>

int main(void){
    double loan, intrate, mpay, mintrate, first, second, third;
    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf", &intrate);
    printf("Enter monthly payment: ");
    scanf("%lf", &mpay);
    mintrate = intrate / 12 / 100;

    first = (loan - mpay) + (loan * mintrate);
    second = (first - mpay) + (first * mintrate);
    third = (second - mpay) + (second * mintrate);
    
    printf("Balance remaining after first payment: $%.2lf\n", first);
    printf("Balance remaining after second payment: $%.2lf\n", second);
    printf("Balance remaining after third payment: $%.2lf\n", third);

    return 0;
}
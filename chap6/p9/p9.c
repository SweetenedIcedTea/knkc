#include <stdio.h>

int main(void){
    double loan, intrate, mpay, mintrate, pay;
    int amtpay, i;
    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf", &intrate);
    printf("Enter monthly payment: ");
    scanf("%lf", &mpay);
    printf("Enter amount of payments to be made: ");
    scanf("%d", &amtpay);

    mintrate = intrate / 12 / 100;
    i = 1;
    pay = (loan - mpay) + (loan * mintrate);
    printf("Balance remaining after payment number %d: $%.2lf\n", i, pay);

    while (amtpay - i){
        i++;
        pay = (pay - mpay) + (pay * mintrate);
        printf("Balance remaining after payment number %d: $%.2lf\n", i, pay);
    }

    return 0;
}
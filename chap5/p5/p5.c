#include <stdio.h>

int main(void){
    int income;
    float tax;
    printf("Enter income: $");
    scanf("%d", &income);

    if (income < 750){
        tax = 0.01f * income;
    }
    else if (income >= 750 && income < 2250){
        tax = 0.02f * income + 7.5;
    }
    else if (income >= 2250 && income < 3750){
        tax = 0.03f * income + 37.5;
    }
    else if (income >= 3750 && income < 5250){
        tax = 0.04f * income + 82.5;
    }
    else if (income >= 5250 && income < 7000){
        tax = 0.05f * income + 142.5;
    }
    else {
        tax = 0.06f * income + 230.5;
    }

    printf("Tax due: $%.2f\n", tax);
    return 0;
}
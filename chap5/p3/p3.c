#include <stdio.h>

int main(void){
    float commission, rcomm, value, sprice, samt;

    printf("Enter number of shares to buy: ");
    scanf("%f", &sprice);
    printf("Enter cost of share: ");
    scanf("%f", &samt);

    value = sprice * samt;

    if (value < 2500.00f){
        commission = 30.00f + 0.017f * value;
    } 
    else if (value < 6250.00f){
        commission = 56.00f + 0.0066f * value;
    }
    else if (value < 6250.00f){
        commission = 76.00f + 0.0034f * value;
    }
    else if (value < 6250.00f){
        commission = 100.00f + 0.0022f * value;
    }
    else if (value < 6250.00f){
        commission = 155.00f + 0.0011f * value;
    }
    else {
        commission = 255.00f + 0.0009f * value;
    }

    if (commission < 39.00f){
        commission = 39.00f;
    }

    if (samt < 2000){
        rcomm = 33.00f + 0.03f * samt;
    } 
    else {
        rcomm = 33.00f + 0.02f * samt;
    }

    printf("Commission: $%.2f\n", commission);
    printf("Rival commission: $%.2f\n", rcomm);

    return 0;
}
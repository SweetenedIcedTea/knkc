#include <stdio.h>

// Change this function to be able to add, subtract, multiply, and divide fractions

int main(void){
    int num1, denom1, num2, denom2;
    char op;
    float frac1, frac2;

    printf("Enter two fractions separated by an operation: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &op, &num2, &denom2);
    frac1 = (float) num1 / denom1;
    frac2 = (float) num2 / denom2;
    printf("frac1: %f | frac2: %f \n", frac1, frac2);
    switch (op) {
        case '+':
            printf("The sum is %f\n", frac1 + frac2);
            break;
        case '-':
            printf("The subtract is %f\n", frac1 - frac2);
            break;
        case '*':
            printf("The multiply is %f\n", frac1 * frac2);
            break;
        case '/':
            printf("The divide is %f\n", frac1 / frac2);
            break;
        default:
            printf("The %c operator is not defined. \n", op);
            break;
    }

    return 0;
}
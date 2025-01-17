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
    double value, temp;

    printf("Enter number to approx e: ");
    scanf("%d", &counter);

    value = 0;
    while (counter + 1){
        temp = 1.0 / fact(counter);
        printf("%d %f\n", fact(counter), temp);
        value += temp;
        counter--;
    }

    printf("Approx e: %f", value);
    return 0;
}
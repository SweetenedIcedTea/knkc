#include <stdio.h>

int main(void){
    int test, res;
    printf("Enter a number: ");
    scanf("%d", &test);
    if (test <= 9 && test >= 0){
        res = 1;
    }
    else if (test >= 10 && test <= 99){
        res = 2;
    }
    else if (test >= 100 && test <= 999){
        res = 3;
    }
    else if (test >= 1000 && test <= 9999){
        res = 4;
    }
    else res = -1;

    printf("The number %d has %d digits\n", test, res);
    return 0;
}
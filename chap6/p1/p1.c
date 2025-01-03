#include <stdio.h>

int main(){
    float max, in;
    max = -20;
    while (1){
        printf("Enter a number: ");
        scanf("%g", &in);
        if (in > max){
            max = in;
        }
        if (in <= 0){
            break;
        }
    }
    printf("The largest number entered was %g\n", max);
    return 0;
}
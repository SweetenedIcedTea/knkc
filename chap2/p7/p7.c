#include <stdio.h>

int main(void){
    int dollar, twenty, ten, five, one;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);
    printf("\n");
    twenty = dollar / 20;
    printf("$20 bills: %d\n", twenty);
    dollar -= twenty * 20;
    ten = dollar / 10;
    printf("$10 bills: %d\n", ten);
    dollar -= ten * 10;
    five = dollar / 5;
    printf("$5 bills: %d\n", five);
    dollar -= five * 5;
    one = dollar / 1;
    printf("$10 bills: %d\n", one);
    dollar -= one * 1;
}
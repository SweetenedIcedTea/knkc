#include <stdio.h>

int main(void){
    int main, d1, d2, d3, d4, d5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &main);
    d5 = main % 8;
    main /= 8;
    d4 = main % 8;
    main /= 8;
    d3 = main % 8;
    main /= 8;
    d2 = main % 8;
    main /= 8;
    d1 = main % 8;
    printf("In octal, your number is: %d%d%d%d%d\n", d1, d2, d3, d4, d5);
    return 0;

}
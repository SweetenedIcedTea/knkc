#include <stdio.h>

// For i of type int, the error happens from 46340->46341. The square goes from 2147395600, which is correct, to -2147479015. which is incorrect (correct val is 2,147,488,281). Largest number a 32 unsigned can fit is 2^31 - 1 = 2,147,483,647.
// For i of type short, the error happens from 181->182. The square goes from 32,761, which is correct, to -32412. which is incorrect (correct val is 33,124). Largest number a 16 unsigned can fit is 2^15 - 1 = 32,767.
// For i of type long, the error happens from 3,037,000,499->3,037,000,500. The square goes from _, which is correct, to -_. which is incorrect (correct val is _). Largest number a 64 bit unsigned can fit is 2^63 - 1 = 9,223,372,036,854,775,807.
// The concluision is the system I use is 64 bit.

int main(void){
    long i;
    long n;

    printf("This program prints a table of squares. \n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        printf("%10hd%20hd\n", i, i * i);
    }
    return 0;
}
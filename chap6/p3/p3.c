#include <stdio.h>

int main(void){
    int nom, denom, n, m, div;
    printf("Enter a fraction: ");
    scanf("%d/%d", &nom, &denom);
    n = nom;
    m = denom;
    while (n){
        div = m % n;
        m = n;
        n = div;
    }
    printf("In lowest terms: %d/%d\n", nom / m, denom / m);
    return 0;
}
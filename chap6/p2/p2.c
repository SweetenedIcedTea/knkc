#include <stdio.h>

int main(void){
    int n, m, div;
    printf("Enter two integers: ");
    scanf("%d%d", &n, &m);
    while (n){
        div = m % n;
        m = n;
        n = div;
    }
    printf("Greatest common divisor: %d\n", m);
    return 0;
}
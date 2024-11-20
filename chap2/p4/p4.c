#include <stdio.h>
#define TAX 1.05f

int main(){
    int amt;
    printf("Enter amount in dollars: ");
    scanf("%d", &amt);
    printf("With tax added: $%.2f\n", (float)amt*TAX);

    return 0;
}
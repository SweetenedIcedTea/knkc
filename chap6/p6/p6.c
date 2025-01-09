#include <stdio.h>

int main(void){
    int range, square;
    printf("Enter a number: ");
    scanf("%d", &range);
    square = 2;
    for (int i = 1; i <= range; i++){
        if (i == square * square){
            printf("%d\n", i);
            square += 2;
        }
    }
    return 0;
}
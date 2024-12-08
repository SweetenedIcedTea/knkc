#include <stdio.h>

int main(void){
    int c1, c2, c3, c4, small, large;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &c1, &c2, &c3, &c4);
    large = 0;
    small = 1000000;
    printf("%d %d %d %d\n", c1, c2, c3, c4);
    if (c1 > large) {
        large = c1;
    }
    if (c2 > large){
        large = c2;
    }
    if (c3 > large){
        large = c3;
    }
    if (c4 > large){
        large = c4;
    }
        
    if (c1 < small) {
        small = c1;
    }
    if (c2 < small){
        small = c2;
    }
    if (c3 < small){
        small = c3;
    }
    if (c4 < small){
        small = c4;
    }
    printf("Largest: %d \nSmallest: %d \n", large, small);
    return 0;
}
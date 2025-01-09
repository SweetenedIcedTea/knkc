#include <stdio.h>

int main(void){
    int days, start, count;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &start);
    count = 0;
    for (int i = 1; i < start; i++){
        printf("   ");
        count += 1;
    }
    for (int i = 1; i <= days; i++){
        printf("%2d ", i);
        count += 1;
        if (count == 7){
            printf("\n");
            count = 0;
        }
    }
    printf("\n");
    return 0;
}
#include <stdio.h>

int main(void){
    int m1, d1, y1, m2, d2, y2, early;
    early = 0;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);
    if (y2 < y1){
        early = 1;
    }
    else if (m2 < m1){
        early = 1;
    }
    else if (d2 < d1){
        early = 1;
    }

    if (early){
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m2, d2, y2, m1, d1, y1);
    }
    else {
        printf("%d/%d/%02d is not earlier than %d/%d/%02d\n", m2, d2, y2, m1, d1, y1);
    }
    return 0;
}
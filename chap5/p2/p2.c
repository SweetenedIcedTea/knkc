#include <stdio.h>

int main(void){
    int hr, min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);
    if (hr > 12){
        printf("Equivalent 12-hour time: %d:%02d PM\n", hr - 12, min);
    }
    else if (hr == 12){
        printf("Equivalent 12-hour time: %d:%02d PM\n", hr, min);
    }
    else if (hr > 0){
        printf("Equivalent 12-hour time: %d:%02d AM\n", hr, min);
    }
    else {
        printf("Equivalent 12-hour time: 12:%02d AM\n", min);
    }
    return 0;
}
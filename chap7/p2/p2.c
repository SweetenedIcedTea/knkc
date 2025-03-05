#include <stdio.h>

int main(void){
    int i, n;
    i = 0;
    printf("This program prints a table of squares 24 items at a time. \n");
    while (1) {
        for (n = 0; n < 12; n++){
            i++;
            printf("%10d%20d\n", i, i * i);
        }
        printf("Press Enter to continue... \n");
        getchar();
    }
    return 0;
}
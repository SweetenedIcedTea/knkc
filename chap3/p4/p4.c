#include <stdio.h>

int main(void){
    int f, s, t;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &f, &s, &t);
    printf("You entered %03d.%03d.%04d\n", f, s, t);
    
    return 0;
}
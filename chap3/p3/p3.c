#include <stdio.h>

int main(){
    int gs1, group, pub, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &pub, &item, &check);
    printf("GS1 prefix: %d \nGroup identifier: %d \nPublisher code: %d \nItem number: %d \nCheck digit: %d\n", gs1, group, pub, item, check);
    return 0;
}
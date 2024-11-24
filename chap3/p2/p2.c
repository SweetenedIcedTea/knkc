#include <stdio.h>

int main(void){
    int item, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%-7d\t\t$%7.2f\t%02d/%02d/%4d\n", item, price, month, day, year); // how to make the purchase date line up with the text
    return 0;
}
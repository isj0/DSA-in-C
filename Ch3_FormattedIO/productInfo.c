/* Display formatted product information */

#include <stdio.h>

int main(void)
{
    int item, mm, dd, yy;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%-8d$%8.2f%4d/%02d/%04d\n", item, price, mm, dd, yy);

    return 0;
}
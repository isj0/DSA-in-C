/* Display formatted date */

#include <stdio.h>

int main(void)
{   
    int mm, dd, yy;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%02d/%d", &mm, &dd, &yy);

    printf("You entered the date %d%d%d\n", yy, mm, dd);

    return 0;
}
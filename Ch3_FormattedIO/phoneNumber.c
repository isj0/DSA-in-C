/* Display formatted phone number */

#include <stdio.h>

int main(void)
{

    int area, pre, num;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)  %d-%d", &area, &pre, &num);
    printf("%d.%d.%d\n", area, pre, num);

    return 0;
}
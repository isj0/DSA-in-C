/* Calls to printf that dispaly different variables */

#include <stdio.h>

int main(void)
{
    printf("%-8.1e\n", 30.253);
    printf("%10.6e\n", 30.253);
    printf("%-8.3f\n", 30.253);
    printf("%6.0f\n", 30.253);

    return 0;
}
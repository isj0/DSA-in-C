#include <stdio.h>

int main(void)
{
    int i, j;
    float x;
    printf("Enter 3 numbers: ");
    scanf("%d%f%d", &i, &x, &j);
    printf("%d, %f %d\n", i, x, j);

    return 0;
}
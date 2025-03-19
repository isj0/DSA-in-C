#include <stdio.h>
#include <math.h>

int main() {

    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    // int root = sqrt(x);
    // printf("The square root of %d is %d", x, root);
    int ans = pow(x, 2);

    printf("%d^2 = %d\n", x, ans);

    

    return 0;
}

#include <stdio.h>

int factorial (int x) {

    int fac = 1;

    for (int i = 1; i <= x; i++) {
        fac *= i;
    }

    return fac;
}

int permutation(int n, int r) {
    
    return factorial(n) / factorial(n - r);
}


int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int r;
    printf("Enter r: ");
    scanf("%d", &r);

    int permu = permutation(n, r);

    printf("The combination = %d\n", permu);
    
    return 0;
}
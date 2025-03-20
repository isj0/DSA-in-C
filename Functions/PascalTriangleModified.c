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

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", permutation(i, j));
        }
        printf("\n");
    }
    
    return 0;
}
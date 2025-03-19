#include <stdio.h>

int factorial (int x) {

    int fac = 1;

    for (int i = 1; i <= x; i++) {
        fac *= i;
    }

    return fac;
}

int combination(int n, int r) {
    
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n - r);
    int nCr = nfact / (rfact * nrfact);

    return nCr;
}


int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int r;
    printf("Enter r: ");
    scanf("%d", &r);

    int comb = combination(n, r);

    printf("The combination = %d\n", comb);
    
    return 0;
}
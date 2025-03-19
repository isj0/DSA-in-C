#include <stdio.h>


// Function declaration
void greet();
int minimum(int a, int b);

int main() {

    greet();

    int n;
    printf("Enter no. of lines: ");
    scanf("%d", &n);
    int min = 0;

    for (int i = 1; i <= 2*n-1; i++) {
        for (int j = 1; j <= 2*n-1; j++) {
            int a = i;
            if (i > n) a = 2 * n - i;
            int b = j;
            if (b > n) b = 2 * n - j;
            min = (minimum(a, b));
            printf("%d", n+1-min);
        }
        printf("\n");
    }

    return 0;
}

// Function definition
void greet() {
    printf("Welcome to Data Structures in C !\n");
}

int minimum(int a, int b) {

    int min = a;
    if (b < a) min  = b;
    return min;
}
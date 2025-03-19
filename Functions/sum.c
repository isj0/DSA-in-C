#include <stdio.h>

int add(int a, int b);

int main() {

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int b;
    printf("Now enter another number: ");
    scanf("%d", &b);

    int sum = add(a, b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("The sum = %d\n", sum);

}

int add (int a, int b) {
    return a + b;
}
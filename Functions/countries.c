#include <stdio.h>

void england();
void australia();
void india();

int main() {
    india();        // calling india

    return 0;
}

void england() {
    printf("You are in England.\n");
    return;
}

void australia() {
    printf("You are in Australia.\n");
    england();          // calling england
    return;
}

void india() {
    printf("You are in India\n");
    australia();        // calling australia
    return;
}
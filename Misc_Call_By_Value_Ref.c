#include <stdio.h>

// Function to demonstrate call by value
void callByValue(int x) {
    x = x * 2;
}

// Function to demonstrate call by reference
void callByReference(int *x) {
    *x = *x * 2;
}

int main() {
    int num = 5;

    // Call by value
    printf("Before call by value: %d\n", num);
    callByValue(num);
    printf("After call by value: %d\n", num);

    // Call by reference
    printf("\nBefore call by reference: %d\n", num);
    callByReference(&num);
    printf("After call by reference: %d\n", num);

    return 0;
}
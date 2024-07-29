#include <stdio.h>

// Function prototype
int add(int a, int b);

int main() {
    int num1 = 5;
    int num2 = 7;

    printf("Before function call, num1 = %d and num2 = %d\n", num1, num2);

    // Call the function with num1 and num2 as arguments
    int sum = add(num1, num2);

    printf("After function call, sum = %d\n", sum);

    return 0;
}

// Function definition
int add(int a, int b) {
    // Add the two numbers
    int result = a + b;

    printf("Inside function, result = %d\n", result);

    return result;
}

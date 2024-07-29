#include <stdio.h>

// Function declaration
void changeValue(int x);

int main() {
    int num ,10 ;
    
    printf("Before calling the function, num = %d\n", num);
    
    // Calling the function
    changeValue(num);
    
    printf("After calling the function, num = %d\n", num);

    return 0;
}

// Function definition
void changeValue(int x) {
    x = x * 2;
    printf("Inside the function, x = %d\n", x);
}
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0) 
        return 1;  // Base case
    else 
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num;
    
    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}


#include <stdio.h>
#include <stdbool.h>

// Function to compute (n-1)! mod n using Wilson's Theorem
bool is_prime_wilson(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false; // Even numbers >2 are not prime
    long long factorial_mod = 1;
    for (int i = 2; i < n; i++) {
        factorial_mod = (factorial_mod * i) % n;
    }
    return (factorial_mod == n - 1);
}
// Function to check if a number is even
bool is_even(int n) {
    return n % 2 == 0;
}
int main() {
    int num;
    while (scanf("%d", &num) == 1){
  	// Check even/odd
    	if (is_even(num)) {
        	printf("%d is even.\n", num);
    	} else {
        	printf("%d is odd.\n", num);
    	}
    	// Check prime using Wilson's Theorem
    	if (is_prime_wilson(num)) {
        	printf("%d is prime (Wilson's Theorem).\n", num);
    	} else {
        	printf("%d is not prime.\n", num);
    	}
    }
    return 0;
}


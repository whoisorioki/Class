#include <stdio.h>

int main() {
    int number;
    
    // Read numbers from stdin until EOF
    while (scanf("%d", &number) == 1) {
        if (number % 2 == 0) {
            printf("%d is even\n", number);
        } else {
            printf("%d is odd\n", number);
        }
    }
    
    return 0;
}


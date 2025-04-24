#include <stdio.h>

int main() {
    FILE *file = fopen("test_numbers.txt", "w");  // Open file for writing    
        if (file == NULL) {
           printf("Error opening file!\n");
        return 1;
    }    
   for (int i = 1; i <= 1000; i++) {
        fprintf(file, "%d\n", i);  // Write each number followed by newline
    }
    fclose(file);  // Close the file
    printf("Successfully wrote numbers 1-1000 to test_numbers.txt\n");
    return 0;
}


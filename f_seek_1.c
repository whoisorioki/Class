#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("fhandling.txt", "r"); // Open "fhandling.txt" in read mode
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fseek(fp, 5, SEEK_CUR); // Move the pointer to the end of the file
    printf("%ld", ftell(fp)); // Print the current position (file size)

    fclose(fp); // Close the file
    return 0;
}


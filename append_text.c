#include <stdio.h>
#include <stdlib.h>

int main() {
        int num;
        FILE *fp;
        fp = fopen("fhandling.txt", "a"); // Open in apppend Mode
	if (fp == NULL){
                printf("Error! in opening the file");
                return (1);
        }
        // Write data to file 
        fprintf(fp, "Ruto must go!\n");
        fclose(fp);
        return 0;
}

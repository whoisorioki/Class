#include <stdio.h>

int main(){
	FILE *fptr; 
	fptr = fopen("fhandling.txt", "r");
	fseek(fptr, 4, SEEK_SET);
	char c = fgetc(fptr);
	printf("%c", c);
	fclose(fptr);
}

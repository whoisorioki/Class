#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	char ch;
	char *name;
	FILE *fptr;
	fptr = fopen("fhandling.txt", "w");
	if(fptr == NULL){
		printf("Error");
		exit(1);
	}
	//printf("Enter number: ");
	//scanf("%d", &num);
	printf("Enter character: ");
	scanf("%c", &ch);
	fprintf(fptr, "%c", ch);
	//fprintf(fptr, "%d", num);
	fclose(fptr);
	return 0;
}

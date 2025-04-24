#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	FILE *fp;
	if ((fp = fopen("fhandling.txt", "r")) == NULL){
		printf("Error! in opening the file");
		exit(1);
	}
	fscanf(fp, "%d", &num);
	printf("Value of n=%d,", num);
	fclose(fp);
	return 0;
}

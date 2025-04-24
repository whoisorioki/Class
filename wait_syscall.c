#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(){
	int i,j;
	j=0;
	printf("Ready to fork...\n");
	i=fork();
	if (i==0){
		printf("The child executes this code.\n");
		for (i=0;i<5;i++){
			j=j+i;
		}
		printf("Child j=%d\n", j);
		
	}
	else{
		j=wait(NULL);
		printf("The parent executes this code.\n");
		printf("Parent j=%d\n", j);
	}
}

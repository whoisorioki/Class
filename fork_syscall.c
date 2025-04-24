#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	// Make two processes that run in the same program
	pid_t p = fork();
	if (p<0){
		perror("Fork fail");
		exit(1);
	}
	printf("Habari , process_id(pid) = %d \n", getpid());
	return 0;
}



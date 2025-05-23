// A C program to demonstrate Zombie Process. 
// Child becomes Zombie as parent is sleeping 
// when child process exits. 
#include <stdlib.h> 
#include <stdio.h>
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
	// Fork returns process id 
	// in parent process 
	pid_t child_pid = fork(); 

	// Parent process 
	if (child_pid > 0){
		printf("PID: %d\n", child_pid);
		sleep(50);
		printf("EXITING...\n");
	}

	// Child process 
	else		
		exit(0); 

	return 0; 
} 


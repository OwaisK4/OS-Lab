#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
	int pid;
//	pid = fork();
	printf("I am A and my PID is %d\n", getpid());
	if (fork() == 0){
		printf("I am B and my PID is %d\n", getpid());
		if (fork() == 0){
			printf("I am E and my PID is %d\n", getpid());
		}
	}
	else{
		wait(NULL);
		if (fork() == 0){
			printf("I am C and my PID is %d\n", getpid());
			if (fork() > 0){
				printf("I am F and my PID is %d\n", getpid());
			}
			else{
				wait(NULL);
				printf("I am G and my PID is %d\n", getpid());
			}
		}		
		else{
			wait(NULL);
			printf("I am D and my PID is %d\n", getpid());
		}
	}
	return 0;
}

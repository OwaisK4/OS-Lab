#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
	int pid;
//	pid = fork();
	printf("I am root and my PID is %d\n", getpid());
	if (fork() == 0){
		printf("I am inner node and my PID is %d\n", getpid());
		if (fork() == 0){
			printf("I am leaf1 and my PID is %d\n", getpid());
		}
		else{
			wait(NULL);
			printf("I am leaf2 and my PID is %d\n", getpid());
		}
	}
	else{
		wait(NULL);
		printf("I am leaf3 and my PID is %d\n", getpid());
	}
	return 0;
}

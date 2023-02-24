#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
	int pid;
//	pid = fork();
	printf("I am 1 and my PID is %d\n", getpid());
	if (fork() == 0){
		printf("I am 2 and my PID is %d\n", getpid());
		if (fork() == 0){
			printf("I am 4 and my PID is %d\n", getpid());
			if (fork() == 0){
				printf("I am 8 and my PID is %d\n", getpid());
			}
			else{
				wait(NULL);
				printf("I am 9 and my PID is %d\n", getpid());
			}
		}
		else{
			wait(NULL);
			printf("I am 5 and my PID is %d\n", getpid());
		}
	}
	else{
		wait(NULL);
		printf("I am 3 and my PID is %d\n", getpid());
		if (fork() == 0){
			printf("I am 6 and my PID is %d\n", getpid());
		}
		else{
			wait(NULL);
			printf("I am 7 and my PID is %d\n", getpid());
		}
	}
	return 0;
}

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	int pid = fork();
	if (pid > 0){
		// Parent process
		sleep(1);
		printf("\n Parent ");
		printf("\n PID is %d", getpid());
	}
	else if (pid == 0){
		sleep(5);
		printf("\n Child ");
		printf("\n PID is %d", getpid());
		printf("\n Parent PID is %d", getppid());
	}
	wait(NULL);
	return 0;
}

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

void fork7(){
	int pid = fork();
	if (pid < 0){
		printf("Unsuccessful Child Process Creation\n.");
		exit(0);
	}
	else if (pid > 0){
		/* Parent */
		wait(NULL);
		int i;
		for (int i=2; i<=10; i+=2){
			printf("%d ", i);
		}
		printf("Parent ends.\n");

	}
	else{
		printf("PID = %d\n", getppid());
		int i;
		for (int i=1; i<=10; i+=2){
			printf("%d ", i);
		}
		printf("Child ends.\n");
	}
}

int main(){
	fork7();
	return 0;
}

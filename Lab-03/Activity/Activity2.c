#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

void fork8(){
	int count = 0;
	int pid = fork();
	if (pid < 0){
		printf("Unsuccessful Child Process Creation\n.");
		exit(0);
	}
	else if (pid > 0){
		/* Parent */
		wait(NULL);
		printf("Parent\n");
		for (; count<5; count++){
			printf("%d ", count);
		}
	}
	else{
		printf("Child\n");
		for (; count<5; count++){
			printf("%d ", count);
		}
		printf("Parent PID = %d\n", getppid());
		sleep(3);
		execl("/usr/bin/gedit", "gedit", (char *) NULL);
		exit(0);
	}
}

int main(){
	fork8();
	return 0;
}

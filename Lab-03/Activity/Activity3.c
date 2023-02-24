#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
	int pid;
//	pid = fork();
	if (fork() == 0){
		if (fork() == 0){
			if (fork() == 0){
//				echo "Hello World. Printed by child p3.";
//				execl("/bin/bash","-c","echo \"hello world!\"",NULL);
				printf("Printing files using ls\n");
				execl("/bin/ls", "ls", NULL);
			}
			else{
				wait(NULL);
				printf("\nExit of process p2");
			}
		}
		else{
			wait(NULL);
			printf("\nExit of process p1");
		}
	}
	else{
		wait(NULL);
		printf("\nExit of main process\n");
	}
	return 0;
}

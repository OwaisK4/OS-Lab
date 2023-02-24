#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int PID;
    char cmd[256];
    printf("Press e if you want to terminate\n");

    while (1){
        printf("cmd: ");
        scanf("%s", cmd);
        if (strcmp(cmd, "e") == 0){
            exit(0);
        }
        if ((PID = fork()) > 0){
            wait(NULL);
        }
        else if (PID == 0){
            execlp(cmd, cmd, NULL);
            fprintf(stderr, "Cannot execute %s\n", cmd);
            exit(1);
        }
        else if (PID == -1){
            fprintf(stderr, "Cannot create a new process\n");
            exit(2);
        }
    }
}
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	if (fork()){
		if (!fork()){
			fork();
			printf("1,PID=%d ", getpid());
		}
		else{
//			printf("2 ");
			printf("2,PID=%d ", getpid());
		}
	}
	else{
//		printf("3 ");
		printf("3,PID=%d ", getpid());
	}
//	printf("4 ");
	printf("4,PID=%d ", getpid());
	return 0;
}

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void parent_process(int x);
void child_process(int x);

int y = 10;

int main(){
	int x = 0;
	printf("Before Forking \n");
	printf("Creating child process \n");
	int i = fork();
	if (i == 0){
		child_process(x);
	}
	else{
		parent_process(x);
	}
	printf("After Forking \n");
	return 0;
}

void child_process(int a){
	y += 2;
	a = 3;
	printf("The value of child process variable = %d\n", a);
	printf("In child process: y = %d\n", y);
}
void parent_process(int b){
	y += 5;
	b = 2;
	printf("The value of child process variable = %d\n", b);
	printf("In child process: y = %d\n", y);
}

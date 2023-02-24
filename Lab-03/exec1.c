#include<stdio.h> 
#include <sys/types.h> 
#include<unistd.h> 
int main() { 

//execlp("/usr/bin/firefox", "firefox", (char*)0);
execl("/usr/bin/firefox", "/usr/bin/firefox", "facebook.com", (char*)NULL);

perror("execl"); 
return 0; 
} 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(){
    int x = 100;
    printf("hello world (pid:%d) x is %d\n", (int) getpid(), x);
    int rc = fork();
    if (rc < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        // child (new process)
        x=2;
        printf("hello, I am child (pid:%d) x is %d\n", (int) getpid(), x);
    } else {
        // parent goes down this path (original process)
        x=5;
        printf("hello, I am parent of %d (pid:%d) x is %d\n",
	       rc, (int) getpid(), x);
    }
    return 0;
}
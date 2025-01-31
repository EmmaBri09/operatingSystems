#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void main(){
    int rc = fork();
    if (rc < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0){
        int wc = wait(NULL);
        printf("Hello. wc is %d\n", wc);
    } else {

        printf("Goodbye\n");
    }
}
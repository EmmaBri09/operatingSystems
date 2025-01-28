#include <stdio.h>

void main(){
    int myNumbers[4] = {24, 52, 75, 100};

    int *ptr = &myNumbers;

    printf("The second element is: %d\n", ptr[1]);
}
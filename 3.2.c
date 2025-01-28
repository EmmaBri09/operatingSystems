#include <stdio.h>

void main(){
    int myNumbers[4] = {24, 52, 75, 100};

    int *ptr = &myNumbers;

    for(int i = 0; i < 4; i++){
        printf("The element is: %d\n", ptr[i]);
    }
}
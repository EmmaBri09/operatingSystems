#include <stdio.h>

void main(){
    int myNumbers[4] = {24, 52, 75, 100};

    int *ptr = &myNumbers;

    printf("The second element is: %d\n", ptr[1]);

    for(int i = 0; i < 4; i++){
        printf("The element is: %d\n", ptr[i]);
    }
}
#include <stdio.h>

void main(){
    printf("Please enter a number: ");
    int userNum;
    scanf("%d", &userNum);

    if(userNum % 2 == 0){
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

}
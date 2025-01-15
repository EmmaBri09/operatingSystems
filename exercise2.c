#include <stdio.h>

void main(){
    printf("Please enter a number: ");
    int userNum;
    scanf("%d", &userNum);

    if (userNum > 0){
        printf("The number is positive.\n");
    } else if (userNum < 0){
        printf("The number is negative.\n");
    } else {
        printf("The number is 0.\n");
    }
}
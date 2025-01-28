#include <stdio.h>
void main(){
    int maxScore = 500;
    int userScore = 423;

    printf("The user's percentage is %.2f\n", ((float) userScore / maxScore * 100));
}
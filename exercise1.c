#include <stdio.h>

void main(){
    printf("Please enter a temperature: \n");
    int temp;
    scanf("%d", &temp);

    printf("%d\n", temp > 70 && temp < 85);
}
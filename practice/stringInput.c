#include <stdio.h>
void main(){
    char firstName[30];

    printf("Enter your first name: ");

    scanf("%s", firstName);

    printf("Hello %s\n", firstName);
}
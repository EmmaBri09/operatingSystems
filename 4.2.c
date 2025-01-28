#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fptr;

    char myString[100];

    fptr = fopen("hello.txt", "r");

    while(fgets(myString, 100, fptr)){
        printf("%s", myString);
    }

    fclose(fptr);
}
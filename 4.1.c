#include <stdio.h>

void main(){
    FILE *fptr;

    fptr = fopen("hello.txt", "w");

    char myString[100];

    fprintf(fptr, "Hello,");
    fprintf(fptr, "\nHow are you?");
    fprintf(fptr, "\nMy name is Emma.");
    fprintf(fptr, "\nWhat's your name?");
    
    fclose(fptr);
}
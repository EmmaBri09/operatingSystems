#include <stdio.h>
#include <string.h>

int main(){
    FILE *filePointer;

    char dataToBeRead[50];

    filePointer = fopen("GfgTest.c", "r");

    if (filePointer == NULL){
        printf("GfgTest.c file failed to open.");
    }

    else{
        printf("The file is now opened.\n");

        fgets(dataToBeRead, 50, filePointer);
        printf("%s\n", dataToBeRead);
    }
}
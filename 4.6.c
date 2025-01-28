#include <stdio.h>


void main(){
    int numStudents;
    printf("Please enter the number of students: ");
    scanf("%d", &numStudents);

    int *ptr = malloc(numStudents * sizeof(int));

    printf("Enter each of the %d students scores out of 100.\n", numStudents);
    for(int i = 0; i < numStudents; i++){
        printf("Student %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    FILE *fptr;

    fptr = fopen("scores.txt", "w");

    fprintf(fptr, "Scores in reverse order.\n");
    for(int j = numStudents - 1; j >= 0; j--) {
        fprintf(fptr, "%d\n", ptr[j]);
    }

    free(ptr);
    fclose(fptr);
}
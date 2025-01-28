#include <stdio.h>
void main(){
    int num1, num2, sum;
    int *ptr1, *ptr2;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter another number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    printf("The sum of ptr1 and ptr2 is: %d\n", sum);
}
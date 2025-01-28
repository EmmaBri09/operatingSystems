#include <stdio.h>

void main(){
    double myDouble = 2.56;
    int myInt = 16;
    char myChar = 'E';

    double *ptr1 = &myDouble;
    int *ptr2 = &myInt;
    char *ptr3 = &myChar;

    printf("%f\n", myDouble);
    printf("%p\n", &myDouble);
    printf("%lu\n", sizeof(myDouble));

    printf("%d\n", myInt);
    printf("%p\n", &myInt);
    printf("%lu\n", sizeof(myInt));

    printf("%c\n", myChar);
    printf("%p\n", &myChar);
    printf("%lu\n", sizeof(myChar));

    printf("%p\n", ptr1);
    printf("%p\n", &ptr1);
    printf("%lu\n", sizeof(ptr1));

    printf("%p\n", ptr2);
    printf("%p\n", &ptr2);
    printf("%lu\n", sizeof(ptr2));

    printf("%p\n", ptr3);
    printf("%p\n", &ptr3);
    printf("%lu\n", sizeof(ptr3));
}
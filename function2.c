#include <stdio.h>

void main(){
    area();
}

int area(){
    int width, height;
    printf("Please enter a width: ");
    scanf("%d", &width);
    printf("Please enter a height: ");
    scanf("%d", &height);
    printf("The area is : %d\n", (width*height));
    return 0;
}
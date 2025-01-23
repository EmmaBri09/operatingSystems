#include <stdio.h>

void main(){
    circle();
}

int circle(){
    float radius, area;
    printf("Please enter the radius: ");
    scanf("%f", &radius);
    area = (float) radius * radius * 3.1415;
    printf("The area of the circle is: %.2f\n", area);
}
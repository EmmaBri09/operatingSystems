#include <stdio.h>

void main(){
    convert();
    areaRec();
    areaCircle();
}

void convert(){
    float farenheit, celsius;
    printf("Enter a temperature in farenheit: ");
    scanf("%f", &farenheit);
    celsius = ((float)farenheit - 32) * 5.0 / 9.0;
    printf("The temperature in celsius is: %.0f\n", celsius);
}

int areaRec(){
    int width, height;
    printf("Please enter a width: ");
    scanf("%d", &width);
    printf("Please enter a height: ");
    scanf("%d", &height);
    printf("The area is : %d\n", (width*height));
    return 0;
}

int areaCircle(){
    float radius, area;
    printf("Please enter the radius: ");
    scanf("%f", &radius);
    area = (float) radius * radius * 3.1415;
    printf("The area of the circle is: %.2f\n", area);
}
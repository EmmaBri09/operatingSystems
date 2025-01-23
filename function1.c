#include <stdio.h>

void main(){
    convert();
}

void convert(){
    float farenheit, celsius;
    printf("Enter a temperature in farenheit: ");
    scanf("%f", &farenheit);
    celsius = ((float)farenheit - 32) * 5.0 / 9.0;
    printf("The temperature in celsius is: %.0f\n", celsius);
}
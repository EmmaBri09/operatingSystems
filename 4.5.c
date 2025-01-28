#include <stdio.h>

struct House{
    char address[50];
    int squareFeet;
    int numberBedrooms;
    int numberBathrooms;
    float price;
};

void main(){
    struct House house1 = {"123 First St.", 2400, 3, 2, 300000};
    struct House house2 = {"1710 Lake Hollingsworth Dr.", 1800, 2, 2, 200000};
    struct House house3 = {"16 Alligator Cir.", 5000, 6, 4, 600000};

    printf("The address is %s There are %d bedrooms and %d bathrooms. It is %d square feet and $%.2f.\n", house1.address, house1.numberBedrooms, house1.numberBathrooms, house1.squareFeet, house1.price);
    printf("The address is %s There are %d bedrooms and %d bathrooms. It is %d square feet and $%.2f.\n", house2.address, house2.numberBedrooms, house2.numberBathrooms, house2.squareFeet, house2.price);
    printf("The address is %s There are %d bedrooms and %d bathrooms. It is %d square feet and $%.2f.\n", house3.address, house3.numberBedrooms, house3.numberBathrooms, house3.squareFeet, house3.price);

}
#include <stdio.h>
 void main(){
    int totalItem = 50;
    float cost = 9.99;
    float totalCost = (float) totalItem * cost;

    printf("The total number of items is: %d\n", totalItem);
    printf("The cost of each item is: %.2f\n", cost);
    printf("The total cost is: %.2f\n", totalCost);
 }
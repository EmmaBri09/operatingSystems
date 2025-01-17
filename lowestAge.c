#include <stdio.h>
void main(){
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int lowest = 70, i;

    for(i = 0; i < 8; i ++){
        if(ages[i] < lowest){
            lowest = ages[i];
        }
    }

    printf("The lowest age is: %d\n", lowest);
}
#include <stdio.h>
void main(){
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float average;
    int i;

    for(i = 0; i < 8; i++){
        average += ages[i];
    }

    average /= (float) 8;

    printf("%.2f\n", average);

}
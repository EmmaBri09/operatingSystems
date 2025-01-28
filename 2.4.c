#include <stdio.h>
void main(){
    int x, y, total;

    for(x = 0; x <= 12; x++){
        for(y = 0; y <= 12; y++){
            total = x * y;
            printf("%d x %d = %d\t", x, y, total);
        }
        printf("\n");
    }
}
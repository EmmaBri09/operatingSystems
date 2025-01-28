#include <stdio.h>
void main(){
    int num = 10;
    while(num >= 0){
        if(num % 2 == 0){
            printf("%d\n", num);
        }
        num -= 1;
    }
}
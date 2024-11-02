#include<stdio.h>
#include <stdlib.h>

int main(){
    for (int a = 0; a < 5; a++){ 
        for (int b = 0; b < 5; b++){  
            if (a == b | abs(a-4) == b ){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
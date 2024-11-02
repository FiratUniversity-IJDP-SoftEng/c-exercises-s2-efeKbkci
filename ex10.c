#include<stdio.h>

int main(){

    for (int a = 1; a <= 10; a++){
        for (int b = 1; b <= 10; b++){

            int result = a*b;

            if (result < 10){
                printf("%d  ",result);
            } else if (10 <= result <= 99){
                printf("%d ",result);
            } else {
                printf("%d",result);
            }
        }
        printf("\n");
    }
}
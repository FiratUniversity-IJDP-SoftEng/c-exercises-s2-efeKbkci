#include<stdio.h>
#define MAX_LINE 5

int main(){

    for (int i = MAX_LINE; i>=1; i--){
        printf("%*s",i,""); // Indent

        for (int n = 1; n <= MAX_LINE - i + 1; n++){
            printf("%d",n);
        }

        for (int m = MAX_LINE - i; m >= 1; m--){
            printf("%d",m);
        }

        printf("\n");
    }

    for (int i = 1; i<=MAX_LINE-1; i++){
        printf("%*s",i+1,"");

        for (int n = 1; n <= MAX_LINE - i; n++){
            printf("%d",n);
        }

        for (int m = MAX_LINE - i - 1; m >= 1; m--){
            printf("%d",m);
        }

        printf("\n");
    }
}

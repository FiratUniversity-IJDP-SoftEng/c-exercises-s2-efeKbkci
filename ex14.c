#include<stdio.h>

int fibonacciCalculator(int nth, int a, int b){

    printf("%d ", a);

    if (nth == 0){
        
        return a;
    }

    return fibonacciCalculator(nth - 1, b, a+b);
}

int main(){
    
    int input;
    printf("Your Value: ");
    scanf("%d",&input);

    printf("fibonacci: %d",fibonacciCalculator(input, 0, 1));
}
#include<stdio.h>

int factorialCalculator(int value){

    if (value == 0){
        return 1;
    }

    return value * factorialCalculator(value - 1);
}

int main(){
    
    int input;
    printf("Your Value: ");
    scanf("%d",&input);

    if (input > 50){
        printf("Your value is too big to calculate it");
    } else {
        printf("Factorial: %d",factorialCalculator(input));
    }
}
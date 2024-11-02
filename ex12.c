#include<stdio.h>

int factorialCalculator(int value){
    int total = 1;

    for (int i = value; i > 0; i--){
        total *= i;
    }

    return total;
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
#include<stdio.h>

int main(){
   
    int totalValue = 0;
    int counter;

    while (1)
    {
        int input;
        printf("Your Value: ");
        scanf("%d",&input);

        if (input == -1){
            break;
        }

        counter++;
        totalValue += input;
    }

    printf("Sum of Values : %d\nAvarage of Values: %d", totalValue, totalValue/counter);
    
}
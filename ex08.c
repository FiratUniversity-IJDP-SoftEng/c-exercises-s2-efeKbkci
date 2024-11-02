#include<stdio.h>
#define ARRAY_SIZE 10

int sum(int *array, int size){
    int total = 0;
    for( int i = 0; i < size; i++ ){
        total += array[i]; // *(array+i)
    }
    return total;
}

int main(){

    int outputList[ARRAY_SIZE]; // {0,0,...,0}

    for ( int i = 0; i < ARRAY_SIZE; i++ ){
        printf("%d.Value : ", i+1);
        scanf("%d",&outputList[i]);
    }

    int totalValue = sum(outputList, ARRAY_SIZE);

    printf("Sum of Values : %d\nAvarage of Values: %d", totalValue, totalValue/ARRAY_SIZE);

}

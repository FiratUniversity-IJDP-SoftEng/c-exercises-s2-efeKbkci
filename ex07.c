#include<stdio.h>

int columnTwo( int index ){
    return 100-((index-1)*10+1);
}

int main(){

    for ( int i = 1; i<=10; i++ )
    {
        printf("%d %d %d\n", i*5, columnTwo(i), i);
    }
}
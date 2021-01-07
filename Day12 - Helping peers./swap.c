#include<stdio.h>

void swap(int *a, int *b){
    int temp= *a;
    *a= *b;
    *b= temp;
}

int main(void){

    int a=10, b=20;
    printf("%d, %d\n", a,b);
    swap(&a, &b);
    printf("%d, %d\n", a,b);
    return 0;
}
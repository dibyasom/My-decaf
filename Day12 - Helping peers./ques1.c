#include<stdio.h>

void armstrong(int num){
    int sum= 0, dup= num;
    while(num>0){
        int r= num%10; // last digit of the number.
        sum+= r*r*r;
        num= num/10;
    }
    if(dup==sum)
        printf("Yes, Armstrong\n");
    else
        printf("No, Not armstrong.\n");
}

int factorial(int num){ //5*4*3**2*1
    if(num==1)
        return 1;
    return num*factorial(num-1);
}

int main(void){

    int num; scanf("%d", &num);
    armstrong(num);

    printf("\nFactorial of Num-> %d\n", factorial(num));
    return 0;
}
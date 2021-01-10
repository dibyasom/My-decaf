// https://www.programiz.com/c-programming/c-pointers

#include <stdio.h> //input/output library
                   //Declaration

//Edge Chances.
int factorial(int n)
{
    int *ptr = (int *)malloc(n * sizeof(int)); //
    int f = 1;
    for (int i = 1; i <= n; i++) //Iterative Method.
        f *= i;
    return f;
}

int factorial_recursive(int n)
{
    if (n == 0)
        return 1;
    return n * factorial_recursive(n - 1);
}

int main()
{
    //function-call
    //array of n-elements.
    int n;
    printf("Whose factorial do you seek? "); //input prompt.
    scanf("%d", &n);
    printf("%d\n", factorial_recursive(n)); //actual paramters.
    return 0;
}
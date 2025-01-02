// program to calculate factorial of a number using recursion
#include <stdio.h>

int factorial(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d\n", n, factorial(n));
    return 0;
}

int factorial(int n){
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}
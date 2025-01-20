// Program to find the sum of the digits of the number using recursion
#include<stdio.h>

int sumOfDigits(int n){
    if (n==0)
        return 0;
    return n%10 + sumOfDigits(n/10);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("The sum of the digits of the given number %d is %d\n", num,sumOfDigits(num) );

    return 0;
}
// Program to swap two numbers using pointers
#include<stdio.h>


int main(){
    int a = 10, b = 20;
    int *ptr1 = &a, *ptr2 = &b;
    int temp;

    printf("Before Swapping: a = %d, b = %d\n",a,b);
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Swapped values: a = %d, b = %d\n",a,b);
}
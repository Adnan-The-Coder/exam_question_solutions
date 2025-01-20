// Program to print the given list in reverse order using arrays
#include<stdio.h>

int main(){
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];

    for (i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    printf("Entered Array is: ");
    for (i=0; i<n; i++)
        printf("%d ",arr[i]);

    printf("The Array in Reverse order is: ");
    for (i=n-1; i>=0; i--)
        printf("%d ",arr[i]);
    
    return 0;
}
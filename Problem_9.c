//  Program to sort elements using bubble sort algorithm
#include<stdio.h>

int main(){
    int n,i,j,temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The Entered array is:");
    for (i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    for (i=0; i<n; i++){
        for (j=0; j<n-1; j++){
            if (arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("The Sorted array is:");
    for (i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
//  Program to find min and max of the array
// sorted and min is at index 0 and max at index n-1
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

    printf("The min in the array is %d:",arr[0]);
    printf("The max in the array is %d:",arr[n-1]);
    return 0;
}
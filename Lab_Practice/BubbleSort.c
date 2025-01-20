// Program to implement Selection sort using iteration
#include<stdio.h>

int main(){
    int n,i,j,temp;
    printf("Enter Number of elements: ");
    scanf("%d",&n);
    int arr[n];

    for (i=0; i<n; i++){
        printf("Enter the Element %d ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Entered elements are...");
    for (i=0; i<n; i++)
        printf("%d ",arr[i]);

    for (i=0; i<n; i++){
        for (j=0; j<n-i-1; j++){ 
            if (arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Elements After Sorting are ");
    for (i=0; i<n; i++)
        printf("%d ",arr[i]);

    return 0;
}
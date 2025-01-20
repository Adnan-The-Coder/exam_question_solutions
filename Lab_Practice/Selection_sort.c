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
        for (j=0; j<n-1; j++){ 
            if (arr[j]>arr[i]){
        // for (j=i+1; j<n; j++){ 
            // if (arr[i]>arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("Elements After Sorting are ");
    for (i=0; i<n; i++)
        printf("%d ",arr[i]);

    return 0;
}
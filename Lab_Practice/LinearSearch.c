// Program to implement Linear Search
#include <stdio.h>
#include<stdlib.h>

int main() {
    int n, key, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i+1);
            exit(1);
        }
    }

    printf("Element not found\n");
    return 0;
}
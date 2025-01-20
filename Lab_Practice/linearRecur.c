#include <stdio.h>

int linearSearch(int arr[], int n, int key, int index) {
    if (index >= n)
       return -1; // out of index and no element found
    if (arr[index] == key)
        return index;
 return linearSearch(arr, n, key, index + 1);
}



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

    int result = linearSearch(arr, n, key, 0);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
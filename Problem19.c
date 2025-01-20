#include <stdio.h>

// Recursive function for binary search
int binary_search(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;  // Base case: target not found
    }

    int mid = low + (high - low) / 2;

    // If target is found at mid
    if (arr[mid] == target) {
        return mid;
    }

    // If target is greater, search in the right half
    if (arr[mid] < target) {
        return binary_search(arr, mid + 1, high, target);
    }
    // If target is smaller, search in the left half
    else {
        return binary_search(arr, low, mid - 1, target);
    }
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 42, 56, 74};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    // Input target value
    printf("Enter the target number to search: ");
    scanf("%d", &target);

    // Call the recursive binary search function
    int result = binary_search(arr, 0, size - 1, target);

    // Output the result
    if (result != -1) {
        printf("Target found at index: %d\n", result);
    } else {
        printf("Target not found in the array.\n");
    }

    return 0;
}
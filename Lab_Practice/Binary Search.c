#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 42, 56, 74};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target, low = 0, high = size - 1, mid;

    // Input target value
    printf("Enter the target number to search: ");
    scanf("%d", &target);

    // Binary search logic
    while (low <= high) {
        mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            printf("Target found at index: %d\n", mid);
            return 0;  // Exit the program if the target is found
        }

        // If target is greater, ignore left half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    // If the target is not found
    printf("Target not found in the array.\n");

    return 0;
}
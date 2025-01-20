#include <stdio.h>

int main() {
    int n;

    // Input number of rows for Pascal's Triangle
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to print each row
    for (int i = 0; i < n; i++) {
        int num = 1;  // First number in each row is always 1

        // Print leading spaces to center the triangle
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print numbers in each row
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);  // Calculate next number in row
        }

        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
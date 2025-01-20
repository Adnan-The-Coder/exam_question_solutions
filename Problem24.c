#include <stdio.h>

int main() {
    int n, sum = 0, count = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate sum and count digits
    while (n != 0) {
        sum += n % 10;  // Add the last digit to sum
        count++;         // Increment the digit count
        n /= 10;         // Remove the last digit from the number
    }

    // Output the results
    printf("Sum of digits: %d\n", sum);
    printf("Count of digits: %d\n", count);

    return 0;
}
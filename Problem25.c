#include <stdio.h>

int main() {
    int n, reversed = 0, original, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  // Store the original number

    // Loop to reverse the number
    while (n != 0) {
        digit = n % 10;  // Get the last digit
        reversed = reversed * 10 + digit;  // Build the reversed number
        n /= 10;  // Remove the last digit from the number
    }

    // Check if the original number is equal to its reversed form
    if (original == reversed) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
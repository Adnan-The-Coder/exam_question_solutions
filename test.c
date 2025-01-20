#include <stdio.h>

void printBinary(int n) {
    int i;
    printf("Binary: ");
    for(i = 31; i >= 0; i--) {
        int k = (n >> i) & 1;  // Extract the ith bit
        printf("%d", k);
        if (i % 4 == 0)  // Print a space every 4 bits for better readability
            printf(" ");
    }
    printf("\n");
}

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Decimal to other bases
    printf("\nDecimal: %d\n", num);

    // Decimal to Binary
    printBinary(num);

    // Decimal to Octal
    printf("Octal: %o\n", num);

    // Decimal to Hexadecimal
    printf("Hexadecimal: %X\n", num);

    return 0;
}

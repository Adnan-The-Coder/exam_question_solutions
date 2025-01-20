#include <stdio.h>

int main() {
    int decimal_number = 254;
    char hexadecimal[20];
    int index = 0, remainder;

    while (decimal_number != 0) {
        remainder = decimal_number % 16;
        printf("Remainder printed is %d\n",remainder);
        if (remainder < 10) {
            hexadecimal[index] = remainder + '0';
        } else {
            hexadecimal[index] = remainder - 10 + 'A';
        }
        index++;
        decimal_number = decimal_number / 16;
    }
    hexadecimal[index] = '\0';

    // Print the hexadecimal number in reverse order
    printf("The hexadecimal representation is 0x");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");

    return 0;
}


// #include <stdio.h>

// int main() {
//     int decimal_number = 254;
//     char hexadecimal[20];
//     int index = 0, remainder;

//     while (decimal_number != 0) {
//         remainder = decimal_number % 16;
//         printf("Remainder printed is %d\n",remainder);
//         if (remainder < 10) {
//             hexadecimal[index] = remainder + '0';
//         } else {
//             hexadecimal[index] = remainder - 10 + 'A';
//         }
//         index++;
//         decimal_number = decimal_number / 16;
//     }
//     hexadecimal[index] = '\0';

//     // Print the hexadecimal number in reverse order
//     printf("The hexadecimal representation is 0x");
//     for (int i = index - 1; i >= 0; i--) {
//         printf("%c", hexadecimal[i]);
//     }
//     printf("\n");

//     return 0;
// }


#include <stdio.h>
int main() {
    int num, remainder, i = 0;
    char hex[20];
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 16;
        if (remainder < 10)
            hex[i] = 48 + remainder; // ASCII value for numbers
        else
            hex[i] = 55 + remainder; // ASCII value for A-F
        num /= 16;
        i++;
    }
    printf("Hexadecimal representation: ");
    for (int j = i - 1; j >= 0; j--) {
    printf("%c", hex[j]);
    }
    printf("\n");
    return 0;
}
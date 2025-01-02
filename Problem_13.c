#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    // Using fgets to read the string safely
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Find the length of the string
    for (i = 0; str[i] != '\0'; i++);

    int j;
    // Check if the string is a palindrome
    for (j = 0; j < i / 2; j++) {
        if (str[j] != str[i - j - 1]) {
            printf("String is not palindrome\n");
            break;
        }
    }

    if (j == i / 2)
        printf("String is palindrome\n");

    return 0;
}

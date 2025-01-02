// program to implement string palindrome
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    int j;
    for(j=0;j<i/2;j++){
        if(str[j]!=str[i-j-1]){
            printf("String is not palindrome\n");
            break;
                // loop is used to compare characters from the beginning (str[j]) and the end (str[i - j - 1]) of the string.
                // i / 2 ensures that only half of the string needs to be checked because if the first half matches the second half in reverse order, the entire string is a palindrome.
                // If any pair of characters doesn't match, the string is not a palindrome, and the loop is exited immediately using break.
                // If a mismatch is found, the message "String is not palindrome" is printed
        }
    }
    if(j==i/2)
        printf("String is palindrome\n");
    // If the loop completes successfully (i.e., all characters matched from the beginning and the end), the condition j == i / 2 will be true.
    // In that case, the message "String is palindrome" is printed.

    return 0;
}
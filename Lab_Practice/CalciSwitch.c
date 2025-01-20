// Program to Replicate a Calculator Using Switch Case
#include <stdio.h>

int main() {
    char operator;
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+': 
            printf("Result: %d\n", num1 + num2); 
            break;
        case '-': 
            printf("Result: %d\n", num1 - num2); 
            break;
        case '*': 
            printf("Result: %d\n", num1 * num2); 
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default: printf("Invalid operator.\n");
    }
 return 0;
}
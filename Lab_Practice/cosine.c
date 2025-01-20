#include <stdio.h>
#include <math.h>
// program to calculate factorial of a number using recursion
#include <stdio.h>


int factorial(int n){
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

int cosine(int n){
    // n is the number of terms 
    int i;
    for (i=1; )
}

int main() {
    float x, result = 1.0, term = 1.0;
    int terms, i;

    // Input from the user
    printf("Enter angle in radians: ");
    scanf("%f", &x);
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    // Calculate cosine using series expansion
    for (i = 1; i < terms; i++) {

        term *= -x * x / ((2 * i) * (2 * i - 1));  
        result += term;  // Add the term to the result
    }

    // Output the result
    printf("Cosine of %.2f is approximately %.6f\n", x, result);

    return 0;
}
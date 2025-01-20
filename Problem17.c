// Program to print the gcd series
#include <stdio.h>

int gcd(int x, int y) {
    if (y == 0)
        return x;
    else
        return gcd(y, x%y);
}

int main() {
    int a,b, i;
    printf("Enter the two numbers of terms: ");
    scanf("%d%d", &a,&b);
    printf("GCD Of (%d,%d) is %d ",a,b, gcd(a,b));
    return 0;
}
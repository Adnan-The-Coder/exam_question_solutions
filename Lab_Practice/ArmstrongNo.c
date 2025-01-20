#include <stdio.h>
#include<math.h>

int main(){
    
    int n,sum=0,r,digit, num_digits=0;

    printf("\n Enter a number: ");
    scanf("%d", &n);

    while (n!=0){
        n = n/10;
        printf("CHecking...%d\n",n);
        num_digits++;
    }
    
    while (n!=0){
        n = n/10;
        sum += pow(sum,num_digits);
        num_digits++;
    }
    while (n != 0) { 
        digit = n % 10; // Get the last digit 
        printf("%d\n", digit); // Display the digit 
        n /= 10; // Remove the last digit from the number }

    printf("Sum to check is %d",sum);
    return 0;
}
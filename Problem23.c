// Program to find the roots of a Quadratic Equations

#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float r1,r2,d;

    printf("Enter the coefficients for the quadratic equations: ");
    scanf("%d%d%d",&a,&b,&c);
    d = b*b - 4*a*c;
    if (d>0){
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d)/(2*a));
        printf("The Roots are real and Unequal: %.4f & %.4f",r1,r2);
    }
    else if (d==0){
        r1 = r2 = -b / (2*a);
        printf("The roots are real and equal: %.4f",r1);
    }
    else
        printf("The roots are imaginary");

    return 0;
}

// Program to find if a number is magic number or not 
#include<stdio.h>
int main()
{
    int n,t=0,rt=0,m,k;
    printf("\n input no:");
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        t=t+n%10;
        n=n/10;

    }
    m=t;
    while(t!=0)
    {
        rt=rt*10;
        rt=rt+t%10;
        t=t/10;
    }
    if(m*rt==k)
    printf("\n magic no");
    else
    printf("\n not magic");

}
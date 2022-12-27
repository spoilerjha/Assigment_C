/*WAP to calculate factorial of a number.*/
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Sum =%d",fact);
    return 0;
}



/*WAP to calculate sum of first N even natural numbers. */
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        sum=sum+i;
    }
    printf("Sum =%d",sum);
    return 0;
}



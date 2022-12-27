/*WAP to calculate sum of first N odd natural numbers. */
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        sum=sum+i;
    }
    printf("Sum =%d",sum);
    return 0;
}




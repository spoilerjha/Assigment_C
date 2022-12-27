/*WAP to find the Nth term of the Fibonacci series.*/
#include<stdio.h>
int main()
{
    int a=0,b=1,next,i,n;
    printf("Enter value of n :");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        next=a+b;
        a=b;
        b=next;
    }
    printf("Nth term is %d",next);
    return 0;
}


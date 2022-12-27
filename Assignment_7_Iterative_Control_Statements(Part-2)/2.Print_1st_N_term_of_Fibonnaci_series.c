/*WAP to find the 1st N terms of the Fibonacci series.*/
#include<stdio.h>
int main()
{
    int a=0,b=1,next,i,n;
    printf("Enter value of n :");
    scanf("%d",&n);
    printf("1st %d term is :1 ",n);
    for(i=1;i<=n-1;i++)
    {
        next=a+b;
        a=b;
        b=next;
        printf("%d ",next);
    }

    return 0;
}



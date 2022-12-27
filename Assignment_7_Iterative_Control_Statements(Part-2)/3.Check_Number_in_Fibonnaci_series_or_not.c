/*WAP to find the 1st N terms of the Fibonacci series.*/
#include<stdio.h>
int main()
{
    int a=0,b=1,next,i,n,flag=0;
    printf("Enter value of n :");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        next=a+b;
        a=b;
        b=next;
        if(n==next)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
        printf("%d is in fibonacci series",n);
    else
        printf("%d is not in fibonacci series",n);
    return 0;
}




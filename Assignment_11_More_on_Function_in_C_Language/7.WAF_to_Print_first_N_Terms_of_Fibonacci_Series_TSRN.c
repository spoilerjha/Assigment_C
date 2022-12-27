/*WAF to print first N terms of Fibonacci series.(TSRN)*/
#include<stdio.h>
void FibonacciSeries(int);
void FibonacciSeries(int n)
{
    int i,a=0,b=1,next;
    printf("1 ");
    for(i=1;i<=n-1;i++)
    {
        next=a+b;
        a=b;
        b=next;
        printf("%d ",next);
    }
}
int main()
{
    int N;
    printf("Enter a Number :");
    scanf("%d",&N);
    FibonacciSeries(N);
    return 0;
}

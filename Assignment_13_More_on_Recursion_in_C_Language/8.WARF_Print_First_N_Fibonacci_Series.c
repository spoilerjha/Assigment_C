/*WAP in c to count the digits of a given number using recursion.*/
#include<stdio.h>
int fibonacciSeries(int);
int fibonacciSeries(int n)
{
    if(n==0 || n==1)
        return n;
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}
int main()
{
    int N,i;
    printf("Enter a Number :");
    scanf("%d",&N);
    for(i=0;i<N;i++)
        printf("%d ",fibonacciSeries(i));
    return 0;
}

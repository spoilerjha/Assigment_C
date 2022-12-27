/*WAF to calculate the number of combinations one can make from n items and r selected at a time.(TSRS)*/
#include<stdio.h>
int combination(int,int);
int factorial(int);
int combination(int n,int r)
{
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int N,R,nCr;
    printf("Enter value of N and R :");
    scanf("%d%d",&N,&R);
    nCr=combination(N,R);
    printf("Number of Combinations is:%d",nCr);
    return 0;
}


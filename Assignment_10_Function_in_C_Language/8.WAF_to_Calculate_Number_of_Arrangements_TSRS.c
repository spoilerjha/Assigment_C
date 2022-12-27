/*WAF to calculate the number of arrangements one can make from n items and r selected at a time.(TSRS)*/
#include<stdio.h>
int permutation(int,int);
int fact(int);
int permutation(int n,int r)
{
    return fact(n)/fact(n-r);
}
int fact(int n)
{
    int j,fact=1;
    for(j=1;j<=n;j++)
    {
        fact=fact*j;
    }
    return fact;
}
int main()
{
    int N,R,nPr;
    printf("Enter value of N and R :");
    scanf("%d%d",&N,&R);
    nPr=permutation(N,R);
    printf("Number of Arrangements is:%d",nPr);
    return 0;
}

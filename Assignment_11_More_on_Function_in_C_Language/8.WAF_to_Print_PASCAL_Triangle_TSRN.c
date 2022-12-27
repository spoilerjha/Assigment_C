/*WAF to print PASCAL Triangle.(TSRN)*/
#include<stdio.h>
int combination(int,int);
int factorial(int);
void pascal(int);
int combination(int n,int r)
{
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact= fact*i;
    }
    return fact;
}
void pascal(int n)
{
    int i,j,k;
    for(i=0;i<=n;i++)
    {
        for(k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }
}
int main()
{
    int N;
    printf("Enter value of N :");
    scanf("%d",&N);
    pascal(N);
    return 0;
}


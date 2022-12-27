/*WAF to print first N prime numbers.(TSRN)*/
#include<stdio.h>
void FirstNPrime(int);
void FirstNPrime(int n)
{
    int i,j,flag=0;
    for(i=1;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
            flag=1;
            break ;
            }
        }
        if(flag==0 && i!=1)
            printf("%d ",i);
        flag=0;
    }
}
int main()
{
    int N;
    printf("Enter a Number :");
    scanf("%d",&N);
    FirstNPrime(N);
    return 0;
}

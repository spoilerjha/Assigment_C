/*WAF to find the next prime number of a given number.(TSRS)*/
#include<stdio.h>
int NextPrimeNumber(int);
int NextPrimeNumber(int n)
{
    int i,j,flag=0;
    for(i=n+1; ;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
            flag=1;
            break ;
            }
        }
        if(flag==0 && n!=1)
            return i;
        flag=0;
    }
}
int main()
{
    int N,R;
    printf("Enter a Number :");
    scanf("%d",&N);
    R=NextPrimeNumber(N);
    printf("%d, is next prime Number of %d",R,N);
    return 0;
}

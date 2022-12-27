/*WAF to check whether a given number is Prime or not.(TSRS)*/
#include<stdio.h>
int PrimeNumberValidation(int);
int PrimeNumberValidation(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0 && n!=1)
        return 1;
    else
        return 0;
}
int main()
{
    int N,R;
    printf("Enter a Number :");
    scanf("%d",&N);
    R=PrimeNumberValidation(N);
    if(R==1)
        printf("%d is a prime Number",N);
    else
        printf("%d is not a prime Number",N);
    return 0;
}

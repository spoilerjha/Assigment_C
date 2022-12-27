/*WAF to calculate the factorial of a number.(TSRS)*/
#include<stdio.h>
int Factorial(int);
int Factorial(int n)
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
    int N,R;
    printf("Enter any Number :");
    scanf("%d",&N);
    R=Factorial(N);
    printf("Factorial :%d",R);
    return 0;
}

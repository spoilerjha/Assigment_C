/*WAF to calculate HCF of two numbers.(TSRS)*/
#include<stdio.h>
int HCF(int,int);
int HCF(int a,int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
            break;
    }
    i=(a*b)/i;
    return i;
}
int main()
{
    int A,B,R;
    printf("Enter two numbers for HCF :");
    scanf("%d%d",&A,&B);
    R=HCF(A,B);
    printf("HCF of %d and %d is :%d",A,B,R);
    return 0;
}

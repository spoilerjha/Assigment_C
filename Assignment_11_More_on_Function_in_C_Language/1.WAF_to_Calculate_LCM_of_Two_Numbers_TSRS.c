/*WAF to calculate LCM of two numbers.(TSRS)*/
#include<stdio.h>
int LCM(int,int);
int LCM(int a,int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
            return i;
    }
}
int main()
{
    int A,B,R;
    printf("Enter two numbers for LCM :");
    scanf("%d%d",&A,&B);
    R=LCM(A,B);
    printf("LCM of %d and %d is :%d",A,B,R);
    return 0;
}

#include<stdio.h>
int HCF(int,int);
int HCF(int a,int b)
{
    if(a%b==0)
        return b;
    HCF(b,a%b);
}
int main()
{
    int A,B,R;
    printf("Enter two Number :");
    scanf("%d%d",&A,&B);
    if(A<B)
    {
        A=A+B;
        B=A-B;
        A=A-B;
    }
    R=HCF(A,B);
    printf("HCF is:%d",R);
    return 0;
}

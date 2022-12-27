/*WAF to calculate simple interest.(TSRS)*/
#include<stdio.h>
float SimpleInterest(int,int,int);
float SimpleInterest(int p,int t,int r)
{
    float interest;
    interest=(p*t*r)/100;
    return interest;
}
int main()
{
    int p1,t1,r1;
    float R;
    printf("Enter the value of principle amount,time,rate :");
    scanf("%d%d%d",&p1,&t1,&r1);
    R=SimpleInterest(p1,t1,r1);
    printf("Simple Interest is :%.2f",R);
    return 0;
}

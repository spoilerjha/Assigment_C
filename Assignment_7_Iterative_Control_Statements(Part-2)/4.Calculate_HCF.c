/*WAP to calculate HCF of two numbers.*/
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    for(i=1; ;i++)
    {
        if((i%a==0)&&(i%b==0))
            break;
    }
    printf("HCF=%d",(a*b)/i);
    return 0;
}


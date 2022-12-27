/*WAP to check whether two given numbers are co-prime numbers or not.*/
#include<stdio.h>
int main()
{
    int a,b,i,HCF;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    for(i=1; ;i++)
    {
        if((i%a==0)&&(i%b==0))
            break;
    }
    HCF=(a*b)/i;
    if(HCF==1)
    {
        printf("%d and %d are CO-prime numbers",a,b);
    }
    else
    {
        printf("%d and %d are not CO-prime numbers",a,b);
    }
    return 0;
}



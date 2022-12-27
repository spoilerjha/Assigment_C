/*WAP to calculate LCM of two numbers.*/
#include<stdio.h>
int main()
{
    int a,b,i,n,count;
    printf("Enter the value of 1st Number:");
    scanf("%d",&a);
    printf("Enter the value of 2nd Number:");
    scanf("%d",&b);
    for(i=1; ;i++)
    {
        if((i%a==0)&&(i%b==0))
        {
            break;
        }
    }
    printf("LCM: %d",i);
    return 0;
}






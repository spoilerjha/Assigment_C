/*WAP to print all prime numbers between two given numbers.*/
#include<stdio.h>
int main()
{
    int a,b,i,j,flag=0;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    for(i=a+1;i<b;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag =1;
                break;
            }
        }
        if(flag!=1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}





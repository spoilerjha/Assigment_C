/*WAP to check whether a given number is a prime number or not.*/
#include<stdio.h>
int main()
{
    int i,n,count;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {

            count=0;
            break;
        }
    }
    if(count==0)
        printf("It's not a prime number");
    else
        printf("It's a prime number");
    return 0;
}





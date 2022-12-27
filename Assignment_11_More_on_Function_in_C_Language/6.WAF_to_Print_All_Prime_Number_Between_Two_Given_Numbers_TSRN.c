/*WAF to print all prime numbers between two given numbers.(TSRN)*/
#include<stdio.h>
void PrimeNumber(int,int);
void PrimeNumber(int a,int b)
{
    int i,j,flag=0;
    if(a<b)
    {
        for(i=a+1;i<b;i++)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                flag=1;
                break ;
                }
            }
            if(flag==0 && i!=1)
                printf("%d ",i);
            else
                printf("Not any prime number lie between %d and %d",a,b);
            flag=0;
        }
    }
    else if(a>b)
    {
        for(i=a-1;i>b;i--)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break ;
                }
            }
            if(flag==0 && i!=1)
                printf("%d ",i);
            else
                printf("Not any prime number lie between %d and %d",a,b);
            flag=0;
        }
    }
    else
        printf("Both Numbers are equal");
}
int main()
{
    int A,B;
    printf("Enter two Number :");
    scanf("%d%d",&A,&B);
    PrimeNumber(A,B);
    return 0;
}


/*WAP to find next prime number of a given number.*/
#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
    printf("Enter value of n :");
    scanf("%d",&n);
    for(i=n+1; ;i++)
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
            break;
        }
    }
    return 0;
}

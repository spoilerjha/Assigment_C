/*WAP to check whether a given number is an Armstrong number or not.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,count,rem,sum;

    for(n=1;n<=10000;n++)
    {
    i=n;
    j=n;
    sum=0;
    count=0;
    while(i)
    {
       count++;
       i=i/10;
    }
    while(j)
    {
        rem=j%10;
        j=j/10;
        sum=sum+ pow(rem,count);
    }
    if(sum==n)
        printf("%d ",n);
    }
    return 0;
}

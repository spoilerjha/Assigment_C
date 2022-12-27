/*WAP to check whether a given number is an Armstrong number or not.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,count=0,rem,sum=0;
    printf("Enter any Number :");
    scanf("%d",&n);
    i=n;
    j=n;
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
        printf("%d is Armstrong number",n);
    else
        printf("%d is not a Armstrong number",n);
    return 0;
}

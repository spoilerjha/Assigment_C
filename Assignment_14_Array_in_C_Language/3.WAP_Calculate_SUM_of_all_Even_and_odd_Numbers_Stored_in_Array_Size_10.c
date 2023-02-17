/*WAP to calculate the sum of all even numbers and sum of all odd numbers which are stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i,Evensum=0,Oddsum=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            Evensum=Evensum+a[i];
        else
            Oddsum=Oddsum+a[i];
    }
    printf("Sum of Even is:%d, and Odd is:%d",Evensum,Oddsum);
    return 0;
}

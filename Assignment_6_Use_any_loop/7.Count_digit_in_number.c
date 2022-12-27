/*WAP to count digits in a given number.*/
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for( ;n; )
    {
        n=n/10;
        count++;
    }
    printf("Number of digit in given number is =%d",count);
    return 0;
}




/*WAP to reverse a given number.*/
#include<stdio.h>
int main()
{
    int n,n1,num=0;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(;n;)
    {
        n1=n%10;
        n=n/10;
        num=(num*10)+n1;

    }
    printf("%d",num+n);
    return 0;
}






/*WAP to check whether a given number is a three digit number or not. */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    if(num>99 && num<1000)
    {
        printf("Given Number is a Three digit number");
    }
    else
    {
        printf("Given Number is not a three digit number");
    }
    return 0;
}

/*WAP to check whether a given number is positive or non-positive. */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Given Number is Positive");
    }
    else
    {
        printf("Given Number is Non-Positive");
    }
    return 0;
}

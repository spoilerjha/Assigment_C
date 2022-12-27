//WAP to check whether the given number is even or odd using bitwise operator.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    num=num&1;
    if(num==0)
    {
        printf("You enter a Even number");
    }
    else
    {
    printf("You enter a Odd number");    }
    return 0;
}


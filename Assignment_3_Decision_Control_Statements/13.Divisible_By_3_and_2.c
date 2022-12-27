/*WAP to check whether a given number is divisible by 3 and divisible by 2. */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    if(num%6 == 0)
    {
        printf("Given Number is divisible by 2 and 3");
    }
    else
    {
        printf("Given Number is not divisible by 2 and 3");
    }
    return 0;
}

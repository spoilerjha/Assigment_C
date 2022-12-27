/*WAP to check whether a given number is divisible by 5 or nt. */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    if(num%5 == 0)
    {
        printf("Given Number is divisible by 5");
    }
    else
    {
        printf("Given Number is Not divisible by 5");
    }
    return 0;
}

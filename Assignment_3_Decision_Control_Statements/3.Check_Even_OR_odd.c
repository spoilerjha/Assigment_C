/*WAP to check whether a given number is an even number or an odd number. */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    if(num%2 == 0)
    {
        printf("Given Number is Even");
    }
    else
    {
        printf("Given Number is Odd");
    }
    return 0;
}

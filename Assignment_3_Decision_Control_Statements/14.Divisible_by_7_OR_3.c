/*WAP to check whether a given number is divisible by 7 or divisible by 3. */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    if(num%7 == 0 || num%3 ==0 )
    {
        printf("Given Number is divisible by 7 or 3");
    }
    else
    {
        printf("Given Number is not divisible by 7 or 3");
    }
    return 0;
}

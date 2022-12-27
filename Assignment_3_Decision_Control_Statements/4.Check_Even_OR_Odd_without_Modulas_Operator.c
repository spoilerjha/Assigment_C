/*WAP to check whether a given number is an even number or odd number without using % operator. */
#include<stdio.h>
int main()
{
    int num,num1,num2;
    printf("Enter any number :");
    scanf("%d",&num);
    num1=num/10;
    num2=num1*10;
    num=num-num2;
    if(num==0 || num == 2 || num == 4 || num == 6 || num == 8 )
    {
        printf("Given Number is Even");
    }
    else
    {
        printf("Given Number is odd");
    }
    return 0;
}

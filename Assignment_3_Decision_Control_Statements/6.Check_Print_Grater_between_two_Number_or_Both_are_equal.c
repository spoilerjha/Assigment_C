/*WAP to print grater between two numbers. Print one number of both are the same. */
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter any two number :");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d is Grater between %d and %d",num1,num1,num2);
    }
    else if(num1<num2)
    {
        printf("%d is Grater between %d and %d",num2,num1,num2);
    }
    else
    {
        printf("Both number are same, and the number is %d",num1);
    }
    return 0;
}

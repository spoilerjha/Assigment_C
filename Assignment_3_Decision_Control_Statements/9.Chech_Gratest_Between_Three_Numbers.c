/*WAP to find greatest among three given numbers.Print number once if the greatest number appears two or three times. */
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter any three number :");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("first number is greatest");
        }
        else
        {
            printf("third number is grater");
        }
    }
    else
    {
        if(num2>num3)
        {
            printf("second is greatest");
        }
        else
        {
            printf("third is greatest");
        }
    }
    return 0;
}

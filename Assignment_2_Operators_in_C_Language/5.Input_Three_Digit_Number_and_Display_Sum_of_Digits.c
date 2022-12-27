//WAP to input a three digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int num,sum,Unit_Palace,Tens_Palce,Hundred_Palace;
    printf("Enter any three digit number :");
    scanf("%d",&num);
    printf("Given number is %d",num);
    Unit_Palace=num%10;
    num=num/10;
    Tens_Palce=num%10;
    num=num/10;
    Hundred_Palace=num%10;
    sum=Unit_Palace+Tens_Palce+Hundred_Palace;
    printf(",Sum of its digit is %d",sum);
    return 0;
}




//WAP to print unit digit of a given number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    printf("Given number is %d and its unit digit is %d",num,num%10);
    return 0;
}

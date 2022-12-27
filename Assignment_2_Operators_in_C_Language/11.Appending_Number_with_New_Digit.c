/*WAP to input a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
(Example - number=984 and digit=9 then the resulting number is 9849) */
#include<stdio.h>
int main()
{
    int num,digit;
    printf("Enter any number and a digit:");
    scanf("%d %d",&num,&digit);
    printf("Number is %d and digit is %d,",num,digit);
    num=num*10+digit;
    printf("After appending with digit new number is: %d",num);
    return 0;
}






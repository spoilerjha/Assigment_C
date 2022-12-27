/*
Program to convert even number into its upper nearest odd number using switch statement
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    switch (num%2==0)
    {
        case 1:
            printf("Upper Nearest odd Number of %d is:%d",num,num+1);
            break;
        case 0:
            printf("You are Enter already a odd number Number");
    }
return 0;
}



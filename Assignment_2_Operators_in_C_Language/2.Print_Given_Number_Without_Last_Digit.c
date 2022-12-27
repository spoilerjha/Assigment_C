//WAP to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    printf("Given number is %d and the number without last digit is %d",num,num/10);
    return 0;
}


//WAP to take a three digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter any three digit number :");
    scanf("%d",&num);
    printf("Number is %d,",num);
    rem=num%10;
    num=rem*100+(num/10);
    printf("After rotation of digit by one position new number is: %d",num);
    return 0;
}

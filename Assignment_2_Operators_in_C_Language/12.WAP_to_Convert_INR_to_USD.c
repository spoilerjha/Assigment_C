//Assume price of 1 USD is INR 76.23.WAP to take the amount in INR and convert it into USD .
#include<stdio.h>
int main()
{
    double USD=76.23,INR;
    printf("Enter any amount in indian currancy:");
    scanf("%lf",&INR);
    printf("Your amount value in INR is %.2lf \n",INR);
    USD=1/USD*INR;
    printf("value of %.2lf in USD is $%.2f",INR,USD);
    return 0;
}





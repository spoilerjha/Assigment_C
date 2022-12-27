/*WAP to check whether a given a given year is leap year or not. */
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year :");
    scanf("%d",&year);
    if(year%100 == 0)
    {
        if(year%400 == 0)
            printf("Given Year is a leap year");
        else
            printf("Given Year is not a leap year");
    }
    else
    {
        if(year%4 == 0)
            printf("Given Year is a leap year");
        else
            printf("Given Year is not a leap year");
    }
    return 0;
}

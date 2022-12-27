/*
Program to check whether a year is a leap year or not.using switch statement
*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any Year :");
    scanf("%d",&year);
    switch (year%100==0)
    {
        case 1:
            switch (year%400==0)
            {
            case 1:
            printf("%d is a leap year",year);
            break;
            case 0:
            printf("%d is not a leap year",year);
            }
            break;
        case 0:
            switch (year%4==0)
            {
            case 1:
            printf("%d is a leap year",year);
            break;
            case 0:
            printf("%d is not a leap year",year);
            }
            break;
        default :
            printf("Next time Enter a valid year");

    }
    return 0;
}


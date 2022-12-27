/*WAP which takes  the day number of a week and display a unique greeting message for the day. */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Day number :");
    scanf("%d",&num);
    switch (num)
    {
        case 1:
            printf("happy Monday,%cenjoy day and week!%c ",15,15);
            break;
        case 2:
            printf("And then came tuesday,%cHope you Surprised%c",21,21);
            break;
        case 3:
            printf("Hey good morning...!%cHappy Wednesday%c",4,4);
            break;
        case 4:
            printf("Stop Waiting for friday.it's Thuresday....!%c",1);
            break;
        case 5:
            printf("...Happy Friday%c",3);
            break;
        case 6:
            printf("Have a great Saturday%c",2);
            break;
        case 7:
            printf("Yes...,Sunday is fun day. Enjoy%c",14);
            break;

        default :
            printf("Invalid day Number");
    }
    return 0;
}


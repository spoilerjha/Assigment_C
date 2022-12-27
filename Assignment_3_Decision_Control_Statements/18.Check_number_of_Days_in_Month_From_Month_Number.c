/*WAP which takes the month number  as an input and display number of days in that manth. */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any month number :");
    scanf("%d",&num);
    if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12)
    {
        printf("31 Days in this Month");
    }
    else if(num==4 || num==6 || num==9 || num==11)
    {
        printf("30 Days in this Month");
    }
    else if(num==2)
    {
        printf("28 Days in this month");
    }
    else
    {
        printf("You're enter a invalid month number");
    }
    return 0;
}


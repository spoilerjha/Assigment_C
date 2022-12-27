/*WAP to take date as an input in below given format and convert the date format and display the result as given below


     User Input date format-

                "DD/MM/YYYY" (15/10/1999)
     Output format-
                "Day-DD ,Month-MM ,Year-YYYY" ("Day-15 ,Month-10 ,Year-1999") */

#include<stdio.h>
int main()
{
    int d;
    int m;
    int y;
    printf("Enter Date:");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("\"Day-%d ,Month-%d ,Year-%d\"",d,m,y);

    return 0;
}

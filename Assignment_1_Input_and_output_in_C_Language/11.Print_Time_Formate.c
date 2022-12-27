
/*WAP to take time as an input in below given format and convert the time format and display the result as given below


     User Input time format-

                "HH:MM"
     Output format-
                "HH Hour and MM Minute" */

#include<stdio.h>
int main()
{
    int h;
    int m,x;
    printf("Enter Time:");
    scanf("%d:%d",&h,&m);
    printf("\"%d Hour %d Minute\"",h,m);
    return 0;
}

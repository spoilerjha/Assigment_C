/*Print Pattern.
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");

    }
    for(i=6;i<=9;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(j>=i-4 && j<=14-i)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");

    }
    return 0;
}

/*Print Pattern.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {

            while(j<=5-i)
            {
                printf(" ");
                j++;
            }
            k=64;
            while(j>=6-i&&j<=5)
            {
                k++;
                printf("%c",k);
                j++;
            }
            while(i!=1&&j>=5&&j<=4+i)
            {
                --k;
                printf("%c",k);

                j++;

            }
        }
    printf("\n");
    }

    return 0;
}


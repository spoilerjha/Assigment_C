/*Print Pattern.
   1
  121
 12321
1234321
*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            while(j<5-i)
            {
                printf(" ");
                j++;
            }
            k=0;
            while(j>=5-i&&j<=4)
            {
                k++;
                printf("%d",k);

                j++;

            }
            while(j>=5&&j<=3+i )
            {
                k--;
                printf("%d",k);

                j++;

            }
        }
    printf("\n");
    }

    return 0;
}

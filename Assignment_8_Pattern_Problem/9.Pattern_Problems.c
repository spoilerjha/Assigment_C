/*Print Pattern.
1234321
 12321
  121
   1

*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            while(i!=1&&j<i)
            {
                printf(" ");
                j++;
            }
            k=0;
            while(j>=i&&j<=4)
            {
                k++;
                printf("%d",k);

                j++;

            }
            while(j>=5&&j<=8-i)
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


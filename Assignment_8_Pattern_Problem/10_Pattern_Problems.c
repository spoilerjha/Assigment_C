/*Print Pattern.
1234321
123 321
12   21
1     1

*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {

            k=0;
            while(j<=5-i)
            {
                k++;
                printf("%d",k);

                j++;

            }
            while(i!=1&&j>=5-i&&j<=2+i)
            {
                printf(" ");
                j++;
            }
            while(j>=5-1&&j<=7&&i==1)
            {
                k--;
                printf("%d",k);
                j++;

            }
            while(j>=5-1&&j<=7&&i!=1)
            {

                printf("%d",k);
                k--;
                j++;

            }
        }
    printf("\n");
    }

    return 0;
}


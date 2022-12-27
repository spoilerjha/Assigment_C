/*Print Pattern.
ABCDCBA
 ABCBA
  ABA
   A
*/
#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=9;j++)
        {

            while(j<i)
            {
                printf(" ");
                j++;
            }
            k=64;
            while(j>=i&&j<=4)
            {
                k++;
                printf("%c",k);
                j++;
            }
            while(i!=4&&j>=5&&j<=8-i)
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

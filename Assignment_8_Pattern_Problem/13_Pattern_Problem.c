/*Print Pattern.
1234567890123
ABCDEFGFEDCBA1
ABCDEF FEDCBA2
ABCDE   EDCBA3
ABCD     DCBA4
ABC       CBA5
AB         BA6
A           A7

*/
#include<stdio.h>
int main()
{
    int i,j=1;
    char k;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=13;j++)
       {
            k=64;
            while(j<=8-i)
            {
                k++;
                printf("%c",k);
                j++;
            }
            while(i!=1&&j<=5+i&&j>=9-i)
            {
                printf(" ");
                j++;
            }
            while(j<=13&&j>=6+i&&i==1)
            {
                k--;
                printf("%c",k);
                j++;
            }

            while(j<=13&&j>=6+i&&i!=1)
            {
                printf("%c",k);
                k--;
                j++;
            }

        }
        printf("\n");
    }
    return 0;
}

/*WAP in c to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.*/
#include<stdio.h>
int Series();
int Series()
{
    int i,j,k,sum=0;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=i;j>=1;j--)
        {
            k=k*j;
        }
        sum=sum+(k/i);
    }
    return sum;
}
int main()
{
    int R;
    R=Series();
    printf("Sum is :%d",R);
    return 0;
}


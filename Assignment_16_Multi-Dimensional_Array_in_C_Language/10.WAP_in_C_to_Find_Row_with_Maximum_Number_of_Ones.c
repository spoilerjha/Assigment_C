/*WAP in C to find the row with maximum number of 1s.*/
#include<stdio.h>
int main()
{
    int a[10][10],i,j,x,sum=0,max=0,index;
    printf("Enter number of rows or columns in matrix:");
    scanf("%d",&x);
    printf("Enter %d Digits of matrix:",x*x);
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Matrix is:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            if(a[i][j]==1)
                sum=sum+a[i][j];
        }
        if(sum>max)
        {
            max=sum;
            index=i;
        }
        sum=0;
    }
    printf("%d row with maximum number of 1s",index+1);
    return 0;
}

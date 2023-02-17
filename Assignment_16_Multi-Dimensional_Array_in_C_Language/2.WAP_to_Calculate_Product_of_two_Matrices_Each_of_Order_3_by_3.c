/*WAP to calculate the product of two matrices each of order 3*3.*/
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,k,product=0;
    printf("Enter All Digits of 1st matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter All Digits of 2nd matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }
    printf("1st matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
                printf("%d ",a[i][j]);
            printf("\n");
    }
    printf("2nd matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
                printf("%d ",b[i][j]);
            printf("\n");
    }
    printf("Product of Matrices is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0 ; k<3 ; k++)
            {
                product=product+a[i][k]*b[k][j];
            }
            printf("%d ",product);
            product=0;
        }
        printf("\n");
    }
    return 0;
}

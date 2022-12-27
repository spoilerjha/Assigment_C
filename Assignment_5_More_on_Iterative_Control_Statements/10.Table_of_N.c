/*WAP to print a table of N. */
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of N :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d ",i*n);
    }
    return 0;
}

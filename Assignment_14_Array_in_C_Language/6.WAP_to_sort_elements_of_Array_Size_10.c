/*WAP to sort elements of an array of size 10.
Take array values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i,j,b;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("After sorting:");
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[i])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

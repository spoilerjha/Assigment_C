/*WAP to find smallest number stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(a[0]>a[i])
            a[0]=a[i];
    }
    printf("Smallest Number is:%d",a[0]);
    return 0;
}

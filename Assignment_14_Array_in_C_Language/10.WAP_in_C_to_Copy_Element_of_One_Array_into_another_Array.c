/*WAP in c to copy the elements of one array into another array. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],b[10],i,j,n;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter all numbers of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Number of copied array is:\n");
    for(i=0;i<n;i++)
        printf("%d ",b[i]=a[i]);
    return 0;
}

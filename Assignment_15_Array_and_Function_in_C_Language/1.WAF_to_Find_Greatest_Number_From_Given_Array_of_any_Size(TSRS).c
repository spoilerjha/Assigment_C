/*Write a function to find the greatest number from the given array of any size.(TSRS)*/
#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Greatest Number of array is:%d",greatest(a,n));
    return 0;
}
int greatest(int A[],int N)
{
    int i;
    for(i=1;i<N;i++)
    {
        if(A[0]<A[i])
            A[0]=A[i];
    }
    return A[0];
}

/*Write a function to sort an array of any size.(TSRN)*/
#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Array is :\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    sorting(a,n);
    return 0;
}
void sorting(int A[],int N)
{
    printf("\nSorted Array is:\n");
    int i,j;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(A[i]>A[j])
            {
                A[i]=A[i]+A[j];
                A[j]=A[i]-A[j];
                A[i]=A[i]-A[j];
            }
        }
        printf("%d ",A[i]);
    }
    printf("%d ",A[i]);
}

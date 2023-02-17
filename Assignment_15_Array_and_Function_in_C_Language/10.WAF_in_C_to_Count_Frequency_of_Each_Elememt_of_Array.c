/*Write a function in c to count the frequency of each element of an array.*/
#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Array is :\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    frequencyElements(a,n);
    return 0;
}
void frequencyElements(int A[],int N)
{
    int c[10]={};
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==A[j])
                c[i]++;
        }
    }
    for(i=0 ; i<10 ; i++)
    {
        if(c[i]>0)
            printf("\n%d - %d",i,c[i]);
    }
}

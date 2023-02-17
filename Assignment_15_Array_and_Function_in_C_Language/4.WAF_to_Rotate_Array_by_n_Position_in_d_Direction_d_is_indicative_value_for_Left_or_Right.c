/*Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example,
if array of size 5 is [32,29,40,12,70]; n is 2 and d is left, then the resulting array after left rotation 2 times is[40,12,70,32,29])*/
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
    rotateValue(a,n);
    return 0;
}
void rotateValue(int A[],int N)
{
    int n,i,temp,d;
    printf("\nEnter Number of Position for rotation:");
    scanf("%d",&n);
    printf("\nEnter Direction of rotation 0 for Left 1 for Right:");
    scanf("%d",&d);
    if(d == 0)
    {
    printf("After Left rotation:");
    while(n != 0)
    {
        temp = A[0];
        for(i=0 ; i<N-1 ; i++)
        {
            A[i]=A[i+1];
        }
        A[N-1] = temp;
        n--;
    }
    for(i=0 ; i<N ; i++)
        printf("%d ",A[i]);
    }
    else
    {
        printf("After Right rotation:");
        while(n != 0)
        {
            temp = A[N-1];
            for(i=N-1 ; i>0 ; i--)
            {
                A[i]=A[i-1];
            }
            A[0] = temp;
            n--;
        }
        for(i=0 ; i<N ; i++)
            printf("%d ",A[i]);
    }
}

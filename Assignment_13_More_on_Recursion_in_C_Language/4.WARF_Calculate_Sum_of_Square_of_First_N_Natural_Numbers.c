/*WARF to calculate sum of square of first n natural numbers.*/
#include<stdio.h>
int calculateSquareN(int);
int calculateSquareN(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n*n+calculateSquareN(n-1);
    return s;
}
int main()
{
    int N,R;
    printf("Enter a Number :");
    scanf("%d",&N);
    R=calculateSquareN(N);
    printf("Sum is:%d",R);
    return 0;
}

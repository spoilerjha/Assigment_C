/*WARF to calculate sum of first N natural numbers.*/
#include<stdio.h>
int calculateSumN(int);
int calculateSumN(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n+calculateSumN(n-1);
    return s;
}
int main()
{
    int N,R;
    printf("Enter a Number :");
    scanf("%d",&N);
    R=calculateSumN(N);
    printf("Sum is:%d",R);
    return 0;
}

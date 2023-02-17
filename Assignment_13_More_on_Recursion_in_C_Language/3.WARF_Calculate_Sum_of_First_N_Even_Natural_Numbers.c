/*WARP to calculate sum of first N even natural numbers.*/
#include<stdio.h>
int calculateEvenSumN(int);
int calculateEvenSumN(int n)
{
    int s;
    if(n==0)
        return 0;
    s=calculateEvenSumN(n-1);

    return(2*n+s);
}
int main()
{
    int N,R;
    printf("Enter a Number :");
    scanf("%d",&N);
    R=calculateEvenSumN(N);
    printf("Sum is:%d",R);
    return 0;
}

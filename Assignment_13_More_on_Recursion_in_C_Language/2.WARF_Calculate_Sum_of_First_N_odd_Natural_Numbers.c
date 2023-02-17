/*WARP to calculate sum of first N odd natural numbers.*/
#include<stdio.h>
int calculateOddSumN(int);
int calculateOddSumN(int n)
{
    int s;
    if(n==1)
        return 1;
    s=calculateOddSumN(n-1);

    return (2*n-1+s);
}
int main()
{
    int N,R;
    printf("Enter a Number :");
    scanf("%d",&N);
    R=calculateOddSumN(N);
    printf("Sum is:%d",R);
    return 0;
}



/*WARP to print first N odd natural numbers.*/
#include<stdio.h>
void printN(int);
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d ",2*n-1);
    }
}
int main()
{
    int N;
    printf("Enter a Number :");
    scanf("%d",&N);
    printN(N);
    return 0;
}

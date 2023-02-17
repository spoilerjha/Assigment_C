/*WARP to print first N even natural numbers in reverse order.*/
#include<stdio.h>
void printN(int);
void printN(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        printN(n-1);
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

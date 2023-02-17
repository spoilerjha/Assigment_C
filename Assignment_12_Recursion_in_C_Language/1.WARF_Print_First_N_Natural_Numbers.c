/*WARP to print first N natural numbers.*/
#include<stdio.h>
void printN(int);
void printN(int n)
{
    if(n>1)
        printN(n-1);
        printf("%d ",n);
}
int main()
{
    int N;
    printf("Enter a Number :");
    scanf("%d",&N);
    printN(N);
    return 0;
}

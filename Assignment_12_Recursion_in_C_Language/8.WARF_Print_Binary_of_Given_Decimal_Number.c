/*WARP to print binary of a given decimal number .*/
#include<stdio.h>
void printN(int);
void printBinary(int n)
{
    if(n>0)
        printBinary(n/2);
        printf("%d ",n%2);
}
int main()
{
    int N;
    printf("Enter a Number :");
    scanf("%d",&N);
    printBinary(N);
    return 0;
}

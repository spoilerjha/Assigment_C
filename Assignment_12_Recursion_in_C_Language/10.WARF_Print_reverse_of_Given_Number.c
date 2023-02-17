/*WARP to print reverse of a given number.*/
#include<stdio.h>
void printN(int);
void printN(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        printN(n/10);
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




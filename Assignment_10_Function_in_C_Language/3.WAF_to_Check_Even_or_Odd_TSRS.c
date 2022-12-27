/*WAF to check whether a given number is even or odd. Return 1 if the number is even,otherwise return 0.(TSRS)*/
#include<stdio.h>
int EvenOdd(int);
int EvenOdd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n1,R;
    printf("Enter any Number :");
    scanf("%d",&n1);
    R=EvenOdd(n1);
    if(R==1)
            printf("Even");
    else
            printf("Odd");
    return 0;
}


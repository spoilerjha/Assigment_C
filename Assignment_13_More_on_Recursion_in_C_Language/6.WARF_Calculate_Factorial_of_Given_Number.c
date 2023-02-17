/*WARF to calculate factorial of given number.*/
#include<stdio.h>
int calculateFactorial(int);
int calculateFactorial(int n)
{
    int s;
    if(n==0)
        return 1;
    s=n*calculateFactorial(n-1);
    return s;
}
int main()
{
    int N,R;
    printf("Enter a Number :");
    scanf("%d",&N);
    R=calculateFactorial(N);
    printf("Factorial is:%d",R);
    return 0;
}


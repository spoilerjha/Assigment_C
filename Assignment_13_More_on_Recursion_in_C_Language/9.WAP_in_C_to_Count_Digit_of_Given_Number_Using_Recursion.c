/*WAP in c to count the digits of a given number using recursion.*/
#include<stdio.h>
int countDigit(int);
int countDigit(int n)
{
    int count=0;
    if(n==0)
        return 0;
    count= ++count +countDigit(n/10);
    return count;
}
int main()
{
    int N,R;
    printf("Enter a Number :");
    scanf("%d",&N);
    R=countDigit(N);
    printf("%d",R);
    return 0;
}


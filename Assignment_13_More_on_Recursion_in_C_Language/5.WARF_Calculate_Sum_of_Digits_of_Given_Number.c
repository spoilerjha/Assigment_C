/*WARF to calculate sum of digit of a given number.*/
#include<stdio.h>
int calculateDigitSum(int);
int calculateDigitSum(int n)
{
    int s;
    if(n==0)
        return 0;
    s=n%10+calculateDigitSum(n/10);
    return s;
}
int main()
{
    int N,R;
    printf("Enter a Number :");
    scanf("%d",&N);
    R=calculateDigitSum(N);
    printf("Sum is:%d",R);
    return 0;
}

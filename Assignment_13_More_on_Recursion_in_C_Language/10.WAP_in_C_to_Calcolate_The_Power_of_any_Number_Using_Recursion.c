/*WAP in c to calculate the power of any number using recursion.*/
#include<stdio.h>
int calculatePower(int,int);
int calculatePower(int m,int n)
{
    if(n==0)
        return 1;
    return m*calculatePower(m,n-1);
}
int main()
{
    int M,N,R;
    printf("Enter a Number and Number Of power :");
    scanf("%d%d",&M,&N);
    R=calculatePower(M,N);
    printf("%d of Power %d is:%d",M,N,R);
    return 0;
}


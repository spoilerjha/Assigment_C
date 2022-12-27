/*WAP in c to find the square of any number using the function.*/
#include<stdio.h>
int Square(int);
int Square(int n)
{
    return n*n;
}
int main()
{
    int N,R;
    printf("Enter a Number :");
    scanf("%d",&N);
    R=Square(N);
    printf("Square of %d is :%d",N,R);
    return 0;
}

//WAP to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("Enter value of b :");
    scanf("%d",&b);
    printf("Value of a is %d and b is %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(",After swapping value of a and b :a is %d and b is %d",a,b);
    return 0;
}




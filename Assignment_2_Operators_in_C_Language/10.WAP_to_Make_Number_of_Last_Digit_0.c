/*WAP to makes the last digit of a number stored in a variable as zero
 (Example - if x=2345 then make it x=2340) */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("Number is %d ",num);
    num=num/10;
    num=num*10;
    printf("After replacing last digit with zero: %d",num);
    return 0;
}





/*WAP which takes the length of the sides of a triangle as an input.Display whether the triangle is valid or not. */
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of three sides of triangle which name is a,b,c :");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        printf("Given triangle is valid");
    }
    else
    {
        printf("It's not a valid triangle");
    }
    return 0;
}

/*
C Program to find all roots of a quadratic equation using switch case statement
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    printf("Enter value of a,b and c of equation :");
    scanf("%d%d%d",&a,&b,&c);
    D= b*b - 4*a*c ;
    switch (D>=0)
    {
        case 1:
            printf("Two Real roots %.f and %.f",(-b+sqrt(D)/2*a),-(-b+sqrt(D)/2*a));
            break;
        case 0:
            printf("Two roots of equation is %.2f and %.2f , It's Imagenary",(-b+sqrt(D)/2*a),-(-b+sqrt(D)/2*a));
    }
return 0;
}




/*WAF to calculate the area of a circle.(TSRS)*/
#include<stdio.h>
float AreaOfCircle(int);
float AreaOfCircle(int r)
{
    float Area;
    Area=3.14*r*r;
    return Area;
}
int main()
{
    int r1;
    float R;
    printf("Enter radius of Circle :");
    scanf("%d",&r1);
    R=AreaOfCircle(r1);
    printf("Area of Circle is :%.2f",R);
    return 0;
}

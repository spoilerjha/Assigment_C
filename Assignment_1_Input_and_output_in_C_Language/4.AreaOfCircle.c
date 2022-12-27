//WAP to find the area of the circle.Take radius of circle from user as input and print the result
#include<stdio.h>
int main()
{
    int radius;
    float area;
    printf("Enter the radius of circle:");
    scanf("%d",&radius);
    area =3.14*radius*radius;
    printf("Area of circle is %.2f having radius %d",area,radius);
    return 0;
}

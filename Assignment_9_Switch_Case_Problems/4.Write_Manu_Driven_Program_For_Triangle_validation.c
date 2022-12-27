/*WA menu driven program with the following options. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char choice;
    int a,b,c;
    while(1)
    {
    printf("********************************************************\n");
    printf("a. Check whether a given set of three numbers are      *\n   lengths of an isosceles triangle or not             *\n");
    printf("b. Check whether a given set of three numbers are      *\n   lengths of sides of a right angled triangle or not  *\n");
    printf("c. Check whether a given set of three numbers are      *\n   equilateral triangle or not                         *\n");
    printf("d. Exit                                                *\n");
    printf("********************************************************\n");
    printf("\nPlease Select a Choice:");
    fflush(stdin);//for release buffer memory.
    scanf("%c",&choice);

    switch (choice)
    {

        case 'a':
            printf("Enter 1st Number:");
            scanf("%d",&a);
            printf("Enter 2nd Number:");
            scanf("%d",&b);
            printf("Enter 3rd Number:");
            scanf("%d",&c);
            if(a==b || b==c || c==a)
                printf("It's a isosceles triangle\n");
            else
                printf("It's not a isosceles triangle\n");
            break;
        case 'b':
            printf("Enter 1st Number:");
            scanf("%d",&a);
            printf("Enter 2nd Number:");
            scanf("%d",&b);
            printf("Enter 2nd Number:");
            scanf("%d",&c);
            if(a*a==(b*b+c*c) || b*b==(c*c+a*a) || c*c==(a*a+b*b))
                printf("It's a Right triangle\n");
            else
                printf("It's not a Right triangle\n");
            break;
        case 'c':
            printf("Enter 1st Number:");
            scanf("%d",&a);
            printf("Enter 2nd Number:");
            scanf("%d",&b);
            printf("Enter 2nd Number:");
            scanf("%d",&c);
            if(a==b && b==c && c==a)
                printf("It's a equilateral triangle\n");
            else
                printf("It's not a equilateral triangle\n");
            break;
        case 'd':
            printf("Thanks for Visit %c",2);
            exit(0);
        default:
        printf("Invalid Choice\n");
    }
    }
    return 0;
}



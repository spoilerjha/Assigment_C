/*WA menu driven program with the following options. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char choice;
    int a,b;
    while(1)
    {
    printf("*******************\n");
    printf("a. Addition       *\nb. Subtraction    *\nc. Multiplication *\nd. Division       *\ne. Exit           *\n");
    printf("*******************\n");
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
            printf("Addition Result is:%d\n",a+b);
            break;
        case 'b':
            printf("Enter 1st Number:");
            scanf("%d",&a);
            printf("Enter 2nd Number:");
            scanf("%d",&b);
            printf("Subtraction Result is:%d\n",a-b);
            break;
        case 'c':
            printf("Enter 1st Number:");
            scanf("%d",&a);
            printf("Enter 2nd Number:");
            scanf("%d",&b);
            printf("Multiplication Result is:%d\n",a*b);
            break;
        case 'd':
            printf("Enter 1st Number:");
            scanf("%d",&a);
            printf("Enter 2nd Number:");
            scanf("%d",&b);
            printf("Division Result is:%d\n",a/b);
            break;

        case 'e':
            printf("Thanks for Visit %c",2);
            exit(0);
        default:
        printf("Invalid Choice\n");
    }
    }
    return 0;
}


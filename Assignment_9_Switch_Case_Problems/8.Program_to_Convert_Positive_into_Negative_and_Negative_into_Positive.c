/*
Program to convert a positive number into a negative number and negative number into a positive number using switch statement
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    switch (num>0)
    {
        case 1:
            printf("%d",-num);
            break;
        case 0:
            switch (num<0)
            {
                case 1:
                    printf("%d",-num);
                    break;
                case 0:
                    printf("O is Not a Positive or Negative Number");
            }
    }
    return 0;
}


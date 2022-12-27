/*WAP to check whether a given character is an alphabet(Uppercase),an alphabet (lowercase),a digit or a special character.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character :");
    scanf("%c",&ch);
    if(ch >=65 && ch <=91 )
    {
        printf("You are enter a uppercase alphabet");
    }
    else if(ch >=97 && ch <=123)
    {
        printf("You are enter a lowercase alphabet");
    }
    else if(ch >=48 && ch <=57)
    {
        printf("You are enter a digit");
    }
    else
    {
        printf("you are enter a special character");
    }
    return 0;
}

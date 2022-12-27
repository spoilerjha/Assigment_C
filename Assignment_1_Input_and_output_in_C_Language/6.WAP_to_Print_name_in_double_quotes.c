//WAP to print the name of the user in double quotes.
#include<stdio.h>
int main()
{
    char name[1];
    printf("Enter the name of user:");
    scanf("%s",name);
    printf("\"Hello,%s\"",name);
    return 0;
}

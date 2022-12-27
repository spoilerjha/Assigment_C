/*WAP to check whether a given alphabet is in uppercase or lowercase.*/
int main()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
    if(ch >= 65 && ch <= 91)
    {
        printf("You enter a Uppercase character ");
    }
    else if(ch >=97 && ch <= 123)
    {
        printf("You enter a Lowercase alphabet ");
    }
    else
    {
        printf("Your enter alphabet is not in uppercase or lowercase");
    }
    return 0;
}

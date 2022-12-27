/*WAP to take marks of five subjects from the user.
Assume marks are given out of 100 and passing marks is 33.
Now display whether the candidate passed the examination or failed.*/
int main()
{
    int a,b,c,d,e;
    printf("Enter marks of all five subject respectively:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>32 && b>32 && c>32 && d>32 && e>32)
    {
        printf("Congrats....! you are passed");
    }
    else
    {
        printf("You are failed,Better Luck Next time");
    }
    return 0;
}

/*WAF to check whether a given number contains a given digit or not.(TSRS)*/
#include<stdio.h>
int Digit(int,int);
int Digit(int m,int n)
{
    int rem;
    while(m)
    {
        rem=m%10;
        if(rem==n)
        {
            return 1;
        }
        m=m/10;
    }
    return 0;
}
int main()
{
    int M,N,R;
    printf("Enter a Number and a digit :");
    scanf("%d%d",&M,&N);
    R=Digit(M,N);
    if(R==1)
        printf("Number Contains given digit");
    else
        printf("Number Not Contains given digit");
    return 0;
}



/*WAF to print all prime factors of a given number.(TSRN)*/
#include<stdio.h>
void PrimeFactor(int);
void PrimeFactor(int n)
{
    int i,j,flag=0,Sum=1,num=n;;
    printf("Prime Factors of %d is :",n);
    for(i=2;i<=n/2+1;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            while(num%i==0)
            {
                printf("%d,",i);
                Sum=Sum*i;
                num=num/i;
            }
        }
    }
    printf("\b.");//for avoid to print last comma (,), of line 22.
}
int main()
{
    int N;
    printf("Enter a Number :");
    scanf("%d",&N);
    PrimeFactor(N);
    return 0;
}

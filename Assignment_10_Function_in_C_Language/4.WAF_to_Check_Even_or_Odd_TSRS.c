/*WAF to print first N natural numbers.(TSRN)*/
#include<stdio.h>
void NaturalNumber(int);
void NaturalNumber(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int N;
    printf("Enter any Number :");
    scanf("%d",&N);
    NaturalNumber(N);
    return 0;
}




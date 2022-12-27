/*WAF to print first N odd natural numbers.(TSRN)*/
#include<stdio.h>
void OddNaturalNumber(int);
void OddNaturalNumber(int n)
{
    int i;
    for(i=1;i<=n;i=i+2)
    {
        printf("%d ",i);
    }
}
int main()
{
    int N;
    printf("Enter any Number :");
    scanf("%d",&N);
    OddNaturalNumber(N);
    return 0;
}




/*WAP which takes the cost price and selling price of a product from the user.Noe calculate and print profit or loss percentage. */
#include<stdio.h>
int main()
{
    float p,l,cp,sp,pp,lp;
    printf("Enter Cost price and Selling price of product :");
    scanf("%f%f",&cp,&sp);
    if(cp<sp)
    {
        p=sp-cp;
        pp=p*100/cp;
        printf("You are in profit of %.2f%%",pp);
    }
    else if(cp>sp)
    {
        l=cp-sp;
        lp=l*100/cp;
        printf("You are in loss of %.2f%%",lp);
    }
    else
    {
        printf("You are not in loss or profit");
    }
    return 0;
}

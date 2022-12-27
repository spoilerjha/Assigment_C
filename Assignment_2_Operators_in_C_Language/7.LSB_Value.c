//WAP to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int num=6,x=0,res=0;
        x=num&1;
        res++;
        if(x==1)
        {
            printf("position of first\"1\"in  LSB is %d",res);

        }
        num=num>>1;
        x=num&1;
        res++;
        if(x==1)
        {
            printf("position of first\"1\"in  LSB is %d",res);

        }


    return 0;
}


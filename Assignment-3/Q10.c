//  Write a program which takes the cost price and selling price of a product from the
//  user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Enter a cost price:");
    scanf("%d",&cp);
    printf("Enter a selling price:");
    scanf("%d",&sp);

    int prof;

    if(sp>=cp)
    {
        prof=sp-cp;
        prof=(prof)*100 / sp;
        printf("profit or loss percentage %d%%",prof);

    }
    else
    {
        prof=sp-cp;
        prof=(prof)*100 / sp;
        printf("loss percentage %d%%",prof);
    }

}

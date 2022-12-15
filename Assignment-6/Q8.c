//  Write a program to check whether a given number is a Prime number or not

#include<stdio.h>

int main()
{
    int x,i,f=0;
    printf("Enter a number to check prime or not: \n");
    scanf("%d",&x);

    if(x==1)
        printf("1 is not a prime no");
/*
    else
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                printf("Not prime");
                break;
            }
        }
        if(i==x)
            printf("Prime no");
*/

    else
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                f=1;
                break;
            }
        }
        if(i==x)
            printf("Prime no.");
        else if(f==1)
            printf("Not prime");

}

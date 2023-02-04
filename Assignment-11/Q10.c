//  Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
//  function.

#include<stdio.h>

int fact(int n)
{
    int facto=1;

    for(int i=1;i<=n;i++)
    {
        facto*=i;
    }
    return facto;
}

int series(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum + fact(i)/i;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);

    printf("%d",series(n));

}

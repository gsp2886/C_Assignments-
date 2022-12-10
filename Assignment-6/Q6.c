//  Write a program to calculate factorial of a number

#include<stdio.h>

int main()
{
    int x,i=1,fact=1;
    printf("Enter a number\n");
    scanf("%d",&x);

    while(i<=x)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial of %d is %d\n",x,fact);
}

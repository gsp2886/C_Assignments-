//  . Write a program to check whether a given number is positive, negative or zero

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num:");
    scanf("%d",&x);

    if(x>0)
        printf("%d is positive",x);
    else if(x==0)
        printf("%d is zero",x);
    else
        printf("%d is negative",x);
}

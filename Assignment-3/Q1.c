// Write a program to check whether a given number is positive or non positive.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num:");
    scanf("%d",&x);

    if(x>0)
        printf("%d is positive",x);
    else
        printf("%d is not positive",x);
}

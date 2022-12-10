//  1. Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num:");
    scanf("%d",&x);

    printf("unit digit of %d is:%d",x,x%10);
}

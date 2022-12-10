// 2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num:");
    scanf("%d",&x);

    printf("unit digit of %d is:%d",x,x/10);
}

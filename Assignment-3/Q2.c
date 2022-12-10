// Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num:");
    scanf("%d",&x);

    if(x%5==0)
        printf("%d is divisible by 5",x);
    else
        printf("%d is not divisible by 5",x);
}

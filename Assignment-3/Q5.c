//  Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num:");
    scanf("%d",&x);

    if(x>=100 && x<1000)
        printf("%d is three digit number",x);
    else
        printf("%d is not three digit number",x);
}

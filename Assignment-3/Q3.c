// Write a program to check whether a given number is an even number or an odd number.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num:");
    scanf("%d",&x);

    if(x%2==0)
        printf("%d even number",x);
    else
        printf("%d is odd number",x);
}

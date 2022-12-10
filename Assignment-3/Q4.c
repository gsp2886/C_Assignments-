// Write a program to check whether a given number is an even number or an odd
// number without using % operator

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num:");
    scanf("%d",&x);

    if(x&1)
        printf("%d odd number",x);
    else
        printf("%d is even number",x);
}

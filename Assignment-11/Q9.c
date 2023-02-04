//  Write a program in C to find the square of any number using the function.
#include<stdio.h>
int sqr(int n)
{
    return n*n;
}
int main()
{
    int a;
    printf("Enter a num:");
    scanf("%d",&a);

    printf("Square od %d is %d",a,sqr(a));
}

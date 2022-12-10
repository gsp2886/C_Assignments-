//  4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter  num:");
    scanf("%d %d",&x,&y);

    printf("\nBefore swap:\n x is %d and y is %d",x,y);

    printf("\n");
    x=x*y;
    y=x/y;
    x=x/y;

    printf("\nAfter swap:\n x is %d and y is %d",x,y);
}

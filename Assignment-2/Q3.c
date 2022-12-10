// 3. Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter  num:");
    scanf("%d %d",&x,&y);

    printf("\nBefore swap:\n%d and %d",x,y);

    printf("\n");
    z=x;
    x=y;
    y=z;

    printf("\nAfter swap:\n%d and %d",x,y);
}

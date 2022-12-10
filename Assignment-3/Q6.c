//  Write a program to print greater between two numbers. Print one number if both are the same.

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two num:");
    scanf("%d %d",&x,&y);

    if(x>y)
        printf("%d is greater",x);
    else if(x==y)
        printf("both are equal");
    else
        printf("%d is greater",y);
}

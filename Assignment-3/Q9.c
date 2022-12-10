//  Write a program to find the greatest among three given numbers. Print number once
//  if the greatest number appears two or three times.

#include<stdio.h>
int main()
{
    int x,y,z;

    printf("Enter three num:");
    scanf("%d %d %d",&x,&y,&z);



    if(x>=y)
    {
        if(x>=z)
            printf("%d is greater",x);
        else
            printf("%d is greater",z);
    }

    else
    {
        if(y>=z)
            printf("%d is greater",y);
        else
            printf("%d is greater",z);
    }

    // Trying ternary operator

    int try;
    try = (x>=y)?( (x>=z)? x :z) : (y>=z)? y:z;
    printf("\n%d is greater",try);

}

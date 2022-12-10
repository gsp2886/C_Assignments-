// Write a program to check whether the given number is even or odd using a bitwise operator
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a num:");
    scanf("%d",&x);

    // Using if else

    if(x&1 == 1)
    {
        printf("%d is odd",x);
    }
    else
    {
        printf("%d is even",x);
    }

    //Using ternary operator

    printf("\n\n");

    (x&1)? printf("%d is odd",x) : printf("%d is even",x) ;

}

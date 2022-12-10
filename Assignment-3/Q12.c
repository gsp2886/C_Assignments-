//  Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char  x;
    printf("Enter a char to check:");
    scanf("%c",&x);

    if( x>=65 && x<=90 )
        printf("%c is uppercase",x);

    else if(x>=97 && x<=122 )
        printf("%c is lowercase",x);
    else
        printf("Invalid input");
}

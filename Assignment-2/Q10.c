//  Write a program to input a number from the user and also input a digit. Append a
//  digit in the number and print the resulting number. (Example - number=234 and
//  digit=9 then the resulting number is 2349)

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a num:");
    scanf("%d",&x);
    printf("Enter a digit:");
    scanf("%d",&y);

    printf("the resulting number %d",x*10+y);
}

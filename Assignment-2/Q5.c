//  Write a program to input a three digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter a three digit:");
    scanf("%d",&x);

    y=x%10;
    sum+=y;
    x=x/10;

    y=x%10;
    sum+=y;
    x=x/10;

    y=x%10;
    sum+=y;
    x=x/10;

    printf("Sum is:%d",sum);
}

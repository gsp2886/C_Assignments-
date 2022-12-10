//  Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter amount in INR:");
    scanf("%f",&x);

    y=x/76.23;

    printf("the amount in %.2frs in USD is %.2f",x,y);

}

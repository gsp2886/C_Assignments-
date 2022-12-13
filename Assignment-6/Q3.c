//  Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>

int main()
{
    int x,i=1,j=1,sum=0;
    printf("Enter a number\n");
    scanf("%d",&x);


    while(i<=x)
    {
        sum=sum+j;
        j+=2;
        i++;
    }
    printf("Sum of first %d odd natural number is %d\n",x,sum);

}

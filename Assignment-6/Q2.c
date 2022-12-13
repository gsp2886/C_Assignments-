//  Write a program to calculate sum of first N even natural numbers

#include<stdio.h>

int main()
{
    int x,i=1,sum=0;
    printf("Enter a number\n");
    scanf("%d",&x);


    while(i<=x)
    {
        sum=sum+i*2;
        i++;
    }
    printf("Sum of first %d even natural number is %d\n",x,sum);

}

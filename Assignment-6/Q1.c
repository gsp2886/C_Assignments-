//  Write a program to calculate sum of first N natural numbers

#include<stdio.h>

int main()
{
    int x,i=1,sum=0;
    printf("Enter a number\n");
    scanf("%d",&x);


    while(i<=x)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of first %d natural number is %d\n",x,sum);

    return 0;
}

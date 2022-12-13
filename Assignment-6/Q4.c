//  Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>

int main()
{
    int x,i=1,sqr=0;
    printf("Enter a number\n");
    scanf("%d",&x);


    while(i<=x)
    {
        sqr=sqr+i*i;
        i++;
    }
    printf("Square of first %d natural number is %d\n",x,sqr);

}
